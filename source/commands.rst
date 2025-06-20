Monty ByteCode Commands
=======================

The Monty interpreter supports the following commands:

.. list-table::
   :header-rows: 1

   * - Command
     - Description
   * - `push <int>`
     - Pushes an integer onto the stack
   * - `pall`
     - Prints all values on the stack
   * - `pint`
     - Prints the value at the top of the stack
   * - `pop`
     - Removes the top element of the stack
   * - `swap`
     - Swaps the top two elements of the stack
   * - `add`
     - Adds the top two elements of the stack
   * - `nop`
     - Does nothing
   * - `sub`
     - Subtracts the top element from the second top element
   * - `div`
     - Divides the second top element by the top element
   * - `mul`
     - Multiplies the top two elements of the stack
   * - `mod`
     - Computes the remainder of the division of the second top element by the top element
   * - `pchar`
     - Prints the char at the top of the stack
   * - `pstr`
     - Prints the string starting at the top of the stack
   * - `rotl`
     - Rotates the stack to the top
   * - `rotr`
     - Rotates the stack to the bottom
   * - `stack`
     - Sets the format of the data to a stack (LIFO)
   * - `queue`
     - Sets the format of the data to a queue (FIFO)