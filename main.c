#include "monty.h"

/**
  *main - the main function
  *@argc: the number of arguments.
  *@argv: arguments
  *Return: Always 0
  */
int line_number = 1;

int main(int argc, char const *argv[])
{
size_t n;
char *lineptr;
FILE *file;
int getline_return;

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
for (; getline_return != -1; line_number++)
{
char **tokens;
tokens = tokenaization(lineptr);
execute_command(tokens);
//execute commands
getline_return = getline(&lineptr, &n, file);
free(tokens);
}
free(lineptr);
free(file);
return 0;
}
