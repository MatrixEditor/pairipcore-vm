.. _vm-ops:

Discovered Operations
=====================

Building on previous research, we can extract all existing opcode handlers
and analyze their behavior. Since the opcodes are randomized and cannot be
directly mapped to their handlers, we define their behaviors to create a
comprehensive overview of the VM's capabilities.

.. cpp:struct:: template<typename BaseTy, typename Ty, const char Op1 = pairipvm::A, const char Op2 = pairipvm::B, const char Store = pairipvm::C, typename Op2Ty = Ty, typename StoreTy = Ty> bin_op

    The VM contains several binary operations, many of which involve loading
    two variables (*A* and *B*) and storing the result in a third variable (*C*).
    The template definition above allows for multiple operations to share the
    same class. For instance, if we want to define an integer addition operation,
    there's a subclass that enables us to easily specialize the operation:

    .. code-block:: cpp

        // Simple specialization
        using add_int_op  = pairipvm::ops::add_op<uint32_t>;

        // We can also control the variables used
        using add_int_op2 = pairipvm::ops::add_op<uint32_t, pairipvm::B, pairipvm::C, pairipvm::A>;

    The *compact format ID*, which includes only the number of variables and the
    destination variable, is available through the following member:

    .. cpp:type:: CompactFormatID = compact_formatid<3, Store>

        The string representation can be accessed via :code:`bin_op<...>::CompactFormatID::value`.

.. cpp:struct:: template<typename BaseTy, typename Ty, const char Op1 = pairipvm::A, const char Store = pairipvm::B, typename StoreTy = Ty> unary_op

    Certain operations involve only two variables, typically with one variable
    specifying the destination. A common example of this is assignment operations,
    which will be discussed next.

Assignment operations
---------------------

.. cpp:struct:: template<typename Ty, const char Op1 = pairipvm::A, const char Store = pairipvm::B> assign_op : unary_op

   This structure defines the behavior of an assignment operation. The default template arguments implement a
   left-to-right assignment(*A* = *B*).

.. cpp:type:: template<typename Ty> lassign_op = assign_op<Ty, pairipvm::A, pairipvm::B>

    This partial specialization handles left-to-right assignments, allowing you to control the type being used. It
    implements the operation *A* = *B*.

.. cpp:type:: template<typename Ty> rassign_op = assign_op<Ty, pairipvm::B, pairipvm::A>

    This partial specialization handles right-to-left assignments, also enabling control over the type. It implements
    the operation *B* = *A*.


Binary operations
-----------------

.. cpp:struct:: template<typename Ty, const char Op1 = pairipvm::A, const char Op2 = pairipvm::B, const char Store = pairipvm::C> or_op : bin_op

  The or_op struct defines a bitwise OR operation between two variables, *A* and
  *B*, storing the result in *C*. It implements the operation *C* = *A* | *B*.

.. cpp:struct:: template<typename Ty, const char Op1 = pairipvm::A, const char Op2 = pairipvm::B, const char Store = pairipvm::C> and_op : bin_op

  The and_op struct defines a bitwise AND operation between two variables, *A* and
  *B*, with the result being stored in *C*. It implements the operation *C* = *A* & *B*.

.. cpp:struct:: template<typename Ty, const char Op1 = pairipvm::A, const char Op2 = pairipvm::B, const char Store = pairipvm::C> xor_op : bin_op

  The xor_op struct performs a bitwise XOR operation on *A* and *B*, and the result
  is stored in *C*. It implements the operation *C* = *A* ^ *B*.

.. cpp:struct:: template<typename Ty, const char Op1 = pairipvm::A, const char Op2 = pairipvm::B, const char Store = pairipvm::C> subtract_op : bin_op

  The subtract_op struct represents a subtraction operation where *B* is subtracted
  from *A*, and the result is stored in *C*. It implements the operation *C* = *A* - *B*.

.. cpp:struct:: template<typename Ty, const char Op1 = pairipvm::A, const char Op2 = pairipvm::B, const char Store = pairipvm::C> add_op : bin_op

  The add_op struct defines an addition operation between *A* and *B*, with the result
  stored in *C*. It implements the operation *C* = *A* + *B*.

.. cpp:struct:: template<typename Ty, const char Op1 = pairipvm::A, const char Op2 = pairipvm::B, const char Store = pairipvm::C> multiply_op : bin_op

  The multiply_op struct performs a multiplication of *A* and *B*, storing the
  product in *C*. It implements the operation *C* = *A* \* *B*.

.. cpp:struct:: template<typename Ty, const char Op1 = pairipvm::A, const char Op2 = pairipvm::B, const char Store = pairipvm::C> modulo_op : bin_op

  The modulo_op struct defines a modulo operation, calculating the remainder of *A*
  divided by *B*, with the result stored in *C*. It implements the operation *C* = *A* % *B*.

.. cpp:struct:: template<typename Ty, const char Op1 = pairipvm::A, const char Op2 = pairipvm::B, const char Store = pairipvm::C> divide_op : bin_op

  The divide_op struct represents a division operation where *A* is divided by *B*,
  and the quotient is stored in *C*. It implements the operation *C* = *A* / *B*.


.. cpp:struct:: template<typename Ty, const char Op1 = pairipvm::A, const char Op2 = pairipvm::B, const char Store = pairipvm::C> compare_op : bin_op

  The compare_op struct defines a comparison operation between *A* and *B*, with
  the result of the comparison stored in *C*. It implements the operation
  *C* = (*A* < *B*) ? 1 : (*A* > *B*) : -1 : 0.

