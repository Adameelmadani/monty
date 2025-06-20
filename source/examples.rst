Examples
========

Basic Operations
----------------

.. code-block:: text

   $ cat bytecodes/00.m
   push 1
   push 2
   push 3
   pall
   $ ./monty bytecodes/00.m
   3
   2
   1

Stack Manipulation
------------------

.. code-block:: text

   $ cat bytecodes/07.m
   push 1
   push 2
   push 3
   pall
   pop
   pall
   pop
   pall
   pop
   pall
   $ ./monty bytecodes/07.m
   3
   2
   1
   2
   1
   1