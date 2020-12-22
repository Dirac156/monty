#include "monty.h"

/**
  *execute_command - execute user_command
  *@t: user command.
  *@arg: argument used.
  *@h: the head.
  *@line_number: the number of lines.
  */

void execute_command(char **t, unsigned int arg, stack_t **h, int line_number)
{
int i, confirmation = 0;
instruction_t f[] = {{"push", _push}, {"pall", _pall}, {NULL, NULL}};
for (i = 0; f[i].opcode != NULL; i++)
{
if (_strcmp(f[i].opcode, t[0]))
{
f[i].f(h, arg);
confirmation = 1;
break;
}
}
if (!confirmation)
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, t[0]);
exit(EXIT_FAILURE);
}
}
