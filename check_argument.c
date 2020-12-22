#include "monty.h"

/**
  *check_argument - verify the argument passed.
  *@tokens: all tokens passed as argument.
  *Return: the argument.
  */

int check_argument(char **tokens)
{
int i = 0, argument;
instruction_t f[] = {{"push", _push}, {"pall", _pall}, {"print", _print},
{"pop", _pop}, {"swap", _swap}, {"add", _add}, {"nop", _nop}, {NULL, NULL}};
for (; f[i].opcode != NULL; i++)
{
if (_strcmp(tokens[0], f[i].opcode))
{
if (_strcmp(tokens[0], "push"))
{
if (!tokens[1] || (tokens[1][0] != '0' && (atoi(tokens[1]) == 0)))
{
fprintf(stderr, "L%d: unvalid argument push\n", line_number);
exit(EXIT_FAILURE);
}
argument = atoi(tokens[1]);
}
}
}
return (argument);
}
