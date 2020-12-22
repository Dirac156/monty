#include "monty.h"
int line_number;
/**
  *main - the main function
  *@argc: the number of arguments.
  *@argv: arguments
  *Return: Always 0
  */

int main(int argc, char const *argv[])
{
size_t n;
char *lineptr, **tokens;
FILE *file;
int getline_return;
unsigned int argument;
stack_t *head = malloc(sizeof(stack_t));
if (!head)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
if (argc != 2)
{
fprintf(stderr, "%s\n", "USAGE: monty file");
exit(EXIT_FAILURE);
}
file = fopen(argv[1], "r");
if (file == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
lineptr = (char *)malloc(sizeof(char));
if (!lineptr)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
getline_return = getline(&lineptr, &n, file);
for (line_number = 1; getline_return != -1; line_number++)
{
tokens = tokenaization(lineptr);
argument = check_argument(tokens);
execute_command(tokens, argument, head);
getline_return = getline(&lineptr, &n, file);
free(tokens);
}
free(lineptr), free(file), free(head);
return (0);
}
