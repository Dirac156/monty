#include "monty.h"

/**
  *_strlen_space - return len of a string.
  *@s: the string.
  *Return: the number of integer
  */
int _strlen_space(char *s)
{
int i = 0, a = 0;
while (s[a] != '\0')
{
if (s[a] != ' ')
i++;
a++;
}
return (i);
}
