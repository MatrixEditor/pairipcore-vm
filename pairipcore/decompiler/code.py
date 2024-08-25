import textwrap
import typing as t

from dataclasses import dataclass
from pairipcore.context import VM, VMVariable, addr_t
from pairipcore.insn import FormatIDs, Insn, InsnInfo, InsnFormat
from pairipcore.opcode import VMOpcode_Interpret


# -----------------------------------------------------------------------------
# code
# -----------------------------------------------------------------------------
class LazyCodeStatement:
    """
    A base class representing a lazy code statement that will be converted to a string representation.
    """

    comment: str | None = None

    def c_str(self) -> str:
        """
        Convert the lazy code statement to a C-style string representation.
        This method should be implemented by subclasses.
        """
        raise NotImplementedError("Subclasses must implement this method.")

    def __str__(self) -> str:
        return self.c_str()


@dataclass
class AssignmentExpr(LazyCodeStatement):
    """
    A class representing an assignment expression in code.
    """

    left: VMVariable | str | LazyCodeStatement
    right: VMVariable | str | LazyCodeStatement

    def c_str(self) -> str:
        """
        Convert the assignment expression to a C-style string representation.
        """
        return f"{self.left} = {self.right}"


@dataclass
class Line(LazyCodeStatement):
    """
    A class representing a single line of code.
    """

    text: str

    def c_str(self) -> str:
        return self.text


class Block(LazyCodeStatement):
    """
    A class representing a block of code, which consists of multiple statements.
    """

    statements: list[LazyCodeStatement | str]

    def __init__(self, *statements) -> None:
        self.statements = list(statements)

    def __iadd__(self, statement: LazyCodeStatement | str) -> LazyCodeStatement:
        self.statements.append(statement)
        return self

    def c_str(self) -> str:
        lines = "\n".join(map(str, self.statements))
        return f"{{\n{textwrap.indent(lines, '  ')}\n}}"


@dataclass
class Comment(Line):
    """
    A class representing a comment in code.
    """

    other: LazyCodeStatement | None = None

    def __radd__(self, other: LazyCodeStatement) -> LazyCodeStatement:
        self.other = other
        return self

    def c_str(self) -> str:
        line = self.other.c_str() if self.other else ""
        if self.text:
            return f"{line:<60}// {self.text}"
        return line


@dataclass
class CallExpr(LazyCodeStatement):
    """
    A class representing a function or method call expression.
    """

    obj: str | VMVariable | None
    func: str
    args: list[str | VMVariable] | None = None
    is_ptr: bool = False

    def c_str(self) -> str:
        """
        Return the function call expression in C-style syntax.
        """
        args_str = ", ".join(map(str, self.args or []))
        args_formatted = f"({args_str})"
        if self.obj:
            return f"{self.obj}{'->' if self.is_ptr else '.'}{self.func}{args_formatted}"
        return f"{self.func}{args_formatted}"


class Code:
    """
    A class representing a collection of code statements and variable declarations.

    Args:
        vm (VM): The virtual machine containing variable information.
    """

    __statements_: list[LazyCodeStatement]

    def __init__(self, vm: VM) -> None:
        self.__statements_ = []
        self.__variables_ = vm.mem.variables  # private reference

    def __iadd__(self, statement: LazyCodeStatement | str) -> "Code":
        if isinstance(statement, str):
            statement = Line(statement)

        self.__statements_.append(statement)
        return self

    def lines(self):
        """
        Generate lines of code including variable declarations and statements.

        Yields:
            str: The lines of code, including variable declarations and statements.
        """
        if len(self.__variables_) > 0:
            for var in self.__variables_.values():
                yield f"{var.type} {var.name};"

        for stmt in self.__statements_:
            yield stmt.c_str()
