#include "monty.h"

/**
 *tokenaization - split a sentence into multiple words.
 *@str: the string passed as argument.
 *Return: pointer holding words.
 */
char **tokenaization(char *str)
{
int i = 0;
const char s[2] = " \n";
char *token;

char **tokens = (char **)malloc(sizeof(char *) * (_strlen_space(str)));
if (!tokens)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
token = strtok(str, s);
while (token != NULL)
{
tokens[i] = token;
token = strtok(NULL, s);
i++;
}
tokens[i] = NULL;

return (tokens);
}
