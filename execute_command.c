#include "monty.h"

/**
  *execute_command - execute user_command
  *@tokens: user command.
  *@argument: argument used.
  */

void execute_command(char **tokens, unsigned int argument, stack_t *head)
{
int i, confirmation = 0;
instruction_t f[] = {{"push", _push}, {"pall", _pall}, {"print", _print},
{"pop", _pop}, {"swap", _swap}, {"add", _add}, {"nop", _nop}, {NULL, NULL}};
for (i = 0; f[i].opcode != NULL; i++)
{
if (_strcmp(f[i].opcode, tokens[0]))
{
f[i].f(&head, argument);
confirmation = 1;
break;
}
}
if (!confirmation)
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, tokens[0]);
exit(EXIT_FAILURE);
}
}
