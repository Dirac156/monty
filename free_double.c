#include "monty.h"

/**
  *free_double - function that free the memory of double.
  *@s: the array.
  */

void free_double(char **s)
{
int i;
for (i = 0; s[i] != NULL; i++)
free(s[i]);
free(s);
}
