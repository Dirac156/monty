#include "monty.h"

/**
  *execute_command - execute user_command
  *@t: user command.
  *@arg: argument used.
  *@h: the head.
  */

void execute_command(char **t, unsigned int arg, stack_t **h)
{
int i, confirmation = 0;
instruction_t f[] = {{"push", _push}, {"pall", _pall}, {"pint", _pint},
{"pop", _pop}, {"swap", _swap}, {"add", _add}, {"nop", _nop}, {"sub", _sub},
{NULL, NULL}};
for (i = 0; f[i].opcode != NULL; i++)
{
if (strcmp(f[i].opcode, t[0]) == 0)
{
f[i].f(h, arg);
confirmation = 1;
}
}
if (!confirmation)
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, t[0]);
exit(EXIT_FAILURE);
}
}
