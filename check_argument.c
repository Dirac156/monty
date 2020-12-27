#include "monty.h"

/**
  *check_argument - verify the argument passed.
  *@tokens: all tokens passed as argument.
  *Return: the argument.
  */

int check_argument(char **tokens, char *s, FILE *file)
{
int i = 0, argument = 0;
instruction_t f[] = {{"push", _push}, {"pall", _pall}, {"pint", _pint},
{"pop", _pop}, {"swap", _swap}, {"add", _add}, {"nop", _nop}, {"sub", _sub},
{NULL, NULL}};
if (strcmp(tokens[0], "push") != 0)
check_others(tokens, s, file);
else
{
for (; f[i].opcode != NULL; i++)
{
if (strcmp(tokens[0], f[i].opcode) == 0)
{
if (!tokens[1] || (tokens[1][0] != '0' && (atoi(tokens[1]) == 0)))
{
fprintf(stderr, "L%d: unvalid argument push\n", line_number);
free(tokens);
free(s);
free(file);
exit(EXIT_FAILURE);
}
argument = atoi(tokens[1]);
}
}
}
return (argument);
}


void check_others(char **tokens, char *s, FILE *file)
{
(void)tokens;
(void)s;
(void)file;
if (_strcmp(tokens[0], 4, "add", "pint", "pop", "sub", "swap") == 0)
{
if (strcmp(tokens[0], "add") == 0)
{
if (!(head) || !(head)->next)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
if (head)
free(head);
free(tokens), free(s), free(file);
exit(EXIT_FAILURE);
}
}
if (strcmp(tokens[0], "pint") == 0)
{
if (!head)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
free(tokens), free(s), free(file);
exit(EXIT_FAILURE);
}
}
if (strcmp(tokens[0], "pop") == 0)
{
if (!head)
{
fprintf(stderr, "L%d: can't pop an empty stacks\n", line_number);
free(tokens), free(s), free(file);
exit(EXIT_FAILURE);
}
}
if (strcmp(tokens[0], "sub") == 0)
{
if (!head || !(head->next))
{
fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
if (head)
free(head);
free(tokens), free(s), free(file);
exit(EXIT_FAILURE);
}
}
if (strcmp(tokens[0], "swap") == 0)
{
if (!head || !(head->next))
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
if (head)
free(head);
free(tokens), free(s), free(file);
exit(EXIT_FAILURE);
}
}
}
}
