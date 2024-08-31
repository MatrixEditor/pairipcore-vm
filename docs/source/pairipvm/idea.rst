.. _vm_idea:

The Idea
========

Working with C++ can sometimes be challenging, so the implementation presented here
will be kept simple. The core concept is to create a Fetch-Decode-Execute loop that
delegates opcode execution to a switch statement, which handles all the defined
opcodes. Here's a pseudocode example of how this might look:

.. code-block:: cpp
  :caption: Pseudo code of a possible implementation

  void interpret(VM &vm) {
    // we assume the bytecode is already loaded and pc is set
    while (!vm.should_stop()) {
      // fetch & decode in one statement
      uint16_t opcode = vm.current_opcode();
      // execute instruction
      if (ops::interpret_op(vm, opcode) < 0) {
        break;
      }
    }
  }

The next step is to base opcode interpretation on the instructions and the
instruction formats we've previously defined:

.. code-block:: cpp

  int ops::interpret_op(VM &vm, const uint16_t opcode) {
    int result_code;
    switch(opcode) {
      /* opcode handlers */
      default:
        result_code = -1;
        break;
    };
    return result_code;
  }

What's next?
------------

TODO
