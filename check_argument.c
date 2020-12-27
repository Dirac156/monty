#include "monty.h"

/**
  *check_argument - verify the argument passed.
  *@tokens: all tokens passed as argument.
  *Return: the argument.
  */

int check_argument(char **tokens, char *s, FILE *file)
{
int argument = 0;
if (strcmp(tokens[0], "push") != 0)
check_others(tokens, s, file);
else
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
return (argument);
}


void check_others(char **tokens, char *s, FILE *file)
{
if (!(_strcmp(tokens[0], 5, "add", "pint", "pop", "sub", "swap", "div", "mul", "mod")))
{
if (!(_strcmp(tokens[0], 5, "add", "sub", "swap", "div", "mul", "mod")))
{
if (!(head) || !(head)->next)
{
if (head)
free(head);
}
}
if (strcmp(tokens[0], "mod") == 0)
{
if (!(head) || !(head)->next)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
free(tokens), free(s), free(file);
exit(EXIT_FAILURE);
}
}
if (strcmp(tokens[0], "mul") == 0)
{
if (!(head) || !(head)->next)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
free(tokens), free(s), free(file);
exit(EXIT_FAILURE);
}
}
if (strcmp(tokens[0], "div") == 0)
{
if (!(head) || !(head)->next)
{
fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
free(tokens), free(s), free(file);
exit(EXIT_FAILURE);
}
}
if (strcmp(tokens[0], "add") == 0)
{
if (!(head) || !(head)->next)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
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
free(tokens), free(s), free(file);
exit(EXIT_FAILURE);
}
}
if (strcmp(tokens[0], "swap") == 0)
{
if (!head || !(head->next))
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
free(tokens), free(s), free(file);
exit(EXIT_FAILURE);
}
}
}
}
