Project Structure
=================

The project is organized as follows:

.. code-block:: text

   monty/
   ├── monty.h          - Header file with prototypes and struct definitions
   ├── main.c           - Entry point of the program
   ├── execute.c        - Functions to execute the bytecode instructions
   ├── stack_ops.c      - Stack operation functions (push, pop, etc.)
   ├── math_ops.c       - Mathematical operation functions (add, sub, etc.)
   ├── string_ops.c     - String operation functions (pchar, pstr, etc.)
   ├── helpers.c        - Helper functions
   └── bf/              - Brainf*ck scripts