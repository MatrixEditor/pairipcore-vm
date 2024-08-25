import argparse
import graphviz

from pairipcore.context import VM, addr_t
from pairipcore.insn import Insn, InsnFormat


class LocationDB:
    """
    A database for managing address ranges and labels within a virtual machine.

    Attributes:
        __ranges_ (List[range]): List of address ranges.
        __labels_ (Dict[addr_t, str]): Dictionary of address labels.
    """

    __ranges_: list[range]
    __labels_: dict[addr_t, str]

    def __init__(self) -> None:
        self.__ranges_ = []
        self.__labels_ = {}

    def __contains__(self, addr: addr_t) -> bool:
        """
        Check if an address is within any of the managed ranges.

        Args:
            addr (addr_t): The address to check.

        Returns:
            bool: True if the address is within any range, False otherwise.
        """
        return any(map(lambda x: addr in x, self.__ranges_))

    def add_insn(self, insn: Insn) -> None:
        """
        Add an instruction's address range to the database.

        Args:
            insn (Insn): The instruction to add.
        """
        self.__ranges_.append(
            range(
                insn.opcode_address, insn.opcode_address + len(insn.insn_format)
            )
        )

    def add_memory(self, start: addr_t, length: int) -> None:
        """
        Add a memory range to the database.

        Args:
            start (addr_t): Starting address of the memory range.
            length (int): Length of the memory range.
        """
        self.__ranges_.append(range(start, start + length))

    def add(self, start: addr_t, end: addr_t) -> None:
        """
        Add a custom address range to the database.

        Args:
            start (addr_t): Starting address of the range.
            end (addr_t): Ending address of the range.
        """
        self.__ranges_.append(range(start, end))

    def get_label(self, addr: addr_t, is_mem: bool = False) -> str:
        """
        Retrieve or generate a label for an address.

        Args:
            addr (addr_t): The address to label.
            is_mem (bool): Whether the address is for memory or not.

        Returns:
            str: The label for the address.
        """
        name = self.__labels_.get(addr)
        if name is None:
            if is_mem:
                name = f"DAT_{addr:#08x}"
            else:
                name = f"LAB_{addr:#08x}"
            self.__labels_[addr] = name
        return name

    def has_label(self, addr: addr_t) -> bool:
        """
        Check if an address has an assigned label.

        Args:
            addr (addr_t): The address to check.

        Returns:
            bool: True if the address has a label, False otherwise.
        """
        return addr in self.__labels_


class GraphDelegate:
    """
    A delegate class for managing graph nodes and edges related to VM instructions and memory.

    Attributes:
        graph (graphviz.Digraph): The graph object for visualization.
        opcode_ids (Dict[int, str]): Mapping of opcodes to human-readable names.

    Args:
        graph (graphviz.Digraph): The graph object for visualization.
        opcode_ids (Dict[int, str]): Mapping of opcodes to human-readable names.
    """

    graph: graphviz.Digraph

    def __init__(self, graph, opcode_ids: dict) -> None:
        self.graph = graph
        self.opcode_ids = opcode_ids

    def memory_node(self, mem_label: str, mem_addr: addr_t) -> None:
        """
        Create a graph node for a memory location.

        Args:
            mem_label (str): The label for the memory node.
            mem_addr (addr_t): The memory address.
        """
        mem_html_label = f'<td align="center" colspan="2"><font color="forestgreen">DAT_{mem_addr:#08x}</font></td>'
        self.graph.node(
            mem_label,
            f'<<table border="0" cellborder="0" cellpadding="3"><tr>{mem_html_label}</tr></table>>',
            {"shape": "record", "fontname": "Courier New"},
        )

    def leaf_insn_node(self, label: str, opcode: int) -> None:
        """
        Create a graph node for a leaf instruction.

        Args:
            label (str): The label for the instruction node.
            opcode (int): The opcode of the instruction.
        """
        opcode_html = self.opcode_ids.get(opcode, "unknown")
        if opcode_html == "unknown":
            opcode_html = f'<font color="red">{opcode_html}</font>'
        head_html = f"{opcode_html} ({opcode:#04x})"
        text = f'<td align="center" colspan="2" bgcolor="lightgrey">{head_html}</td>'
        self.graph.node(
            label,
            f'<<table border="0" cellborder="0" cellpadding="3"><tr>{text}</tr></table>>',
            {"shape": "Mrecord", "fontname": "Courier New"},
        )

    def insn_node(
        self, label: str, opcode: int, insn: Insn, loc_db: LocationDB
    ) -> None:
        """
        Create a graph node for an instruction, including its memory accesses.

        Args:
            label (str): The label for the instruction node.
            opcode (int): The opcode of the instruction.
            insn (Insn): The instruction object.
            loc_db (LocationDB): The location database for memory and label management.
        """
        html_text = []
        for name in insn.insn_format.vars():
            mem_addr = getattr(insn, name)
            create_node = not loc_db.has_label(mem_addr)
            mem_label = loc_db.get_label(mem_addr, is_mem=True)
            if create_node:
                self.memory_node(mem_label, mem_addr)
                loc_db.add_memory(mem_addr, 1)
            html_name = f'<font color="blue1">{name:<8}</font>'
            html_addr = f'<font color="black">#</font><font color="azure4">{mem_addr:#08x}</font>'
            self.graph.edge(
                label,
                mem_label,
                color="grey",
                group="mem",
            )
            html_text.append(f'<td align="left">{html_name}{html_addr}</td>')

        head_html = f'{self.opcode_ids.get(opcode, "unknown")} ({opcode:#04x}) @{insn.opcode_address:#08x}'
        html_text.insert(
            0,
            f'<td align="center" colspan="2" bgcolor="lightgrey">{head_html}</td>',
        )
        text = "<tr>" + "</tr><tr>".join(html_text) + "</tr>"

        self.graph.node(
            label,
            f'<<table border="0" cellborder="0" cellpadding="3">{text}</table>>',
            {"shape": "Mrecord", "fontname": "Courier New"},
        )


def instruction_handler(vm: VM, depth: int) -> None:
    """
    Recursively handle and visualize instructions in the VM's memory, updating
    the location database and graph delegate with instruction details.

    Args:
        vm (VM): The virtual machine instance.
        depth (int): The current depth of recursion.
    """
    loc_db: LocationDB = vm.state["loc_db"]
    if vm.context.pc in loc_db:
        # memory region or overlaps with another instruction
        return

    argv = vm.state["argv"]
    graph: GraphDelegate = vm.state["graph"]
    if depth >= argv.depth:
        return

    opcode = vm.current_opcode()
    if argv.path and opcode != argv.path[depth]:
        return
    vm.context += 2
    label = loc_db.get_label(vm.context.pc - 2)

    format_ids = vm.state["format_ids"]
    if opcode not in format_ids:
        graph.leaf_insn_node(label, opcode)
        loc_db.add(vm.context.pc - 2, vm.context.pc)
        return

    insn = Insn(vm, format_ids[opcode])
    graph.insn_node(label, opcode, insn, loc_db)
    loc_db.add_insn(insn)
    graph.graph.edge(label, loc_db.get_label(insn.info.next), color="green")
    graph.graph.edge(label, loc_db.get_label(insn.info.fallback), color="red")
    if insn.info.next not in loc_db:
        vm.context.pc = insn.info.next
        instruction_handler(vm, depth + 1)
    if insn.info.fallback not in loc_db:
        vm.context.pc = insn.info.fallback
        instruction_handler(vm, depth + 1)


def new_cfg(
    vm: VM, opcode_def: dict, loc_db=None, depth=None, path=None, layout=None
) -> graphviz.Digraph:
    """
    Generates a control flow graph (CFG) for a VM's instructions.

    >>> vm = VM(...)
    >>> cfg = pairipcore.cfg.new_cfg(vm, opcode_def={...}, depth=5)
    >>> open("cfg.dot").write(str(cfg))

    Args:
        vm (VM): The virtual machine instance.
        opcode_def (dict): Definitions of opcodes, including format IDs.
        loc_db (LocationDB, optional): Pre-existing location database. If None, a new one will be created.
        depth (int, optional): Maximum depth for recursion in CFG generation.
        path (list[int], optional): Specific opcode path to follow in the CFG.
        layout (str, optional): Graphviz layout direction (e.g., 'TB' for top-to-bottom).

    Returns:
        graphviz.Digraph: The generated control flow graph.
    """
    if "opcodes" in opcode_def:
        opcode_def = opcode_def["opcodes"]

    opcode_ids = {}
    format_ids = {}
    for opcode, value in opcode_def.items():
        opcode = int(opcode)
        if isinstance(value, dict) and "format_id" in value:
            format_id = value["format_id"]
        else:
            format_id = str(value)

        if format_id is not None:
            format_ids[opcode] = InsnFormat.parse(format_id)
            opcode_ids[opcode] = f"_{format_id}"

    argv = argparse.Namespace(depth=depth, path=path)
    if argv.path:
        argv.depth = len(argv.path)

    if argv.depth is None:
        argv.depth = 10

    dot = graphviz.Digraph(
        "instruction-tree",
        comment="Instruction Trace",
        graph_attr={"rankdir": layout or "TB"},
        node_attr={"shape": "Mrecord", "fontname": "Courier New"},
    )
    loc_db = LocationDB()
    vm.state["loc_db"] = loc_db
    vm.state["graph"] = GraphDelegate(dot, opcode_ids)
    vm.state["format_ids"] = format_ids
    vm.state["argv"] = argv
    instruction_handler(vm, 0)
    return dot
