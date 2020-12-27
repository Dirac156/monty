#include "monty.h"

/**
  *execute_command - execute user_command
  *@t: user command.
  *@arg: argument used.
  *@h: the head.
  */

void execute_command(char **t, unsigned int arg, stack_t **h, char *s, FILE *fi)
{
int i, confirmation = 0;
instruction_t f[] = {{"push", _push}, {"pall", _pall}, {"pint", _pint},
{"pop", _pop}, {"swap", _swap}, {"add", _add}, {"sub", _sub}, {"div", _div},
{"mul", _mul}, {"mod", _mod}, {"pchar", _pchar}, {"pstr", _pstr},
{"rotl", _rotl}, {"rotr", _rotr}, {NULL, NULL}};
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
free(t);
free(s);
free(fi);
exit(EXIT_FAILURE);
}
}
