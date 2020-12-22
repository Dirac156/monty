#include "monty.h"

/**
  *_strlen_space - return len of a string.
  *@s: the string.
  */
int _strlen_space(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
