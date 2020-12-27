#include "monty.h"

/**
 *_strcmp - function that compares if two strings are the same.
 *@str: The string to compare.
 *@str2: a string to compare.
 *Return: This function returns 1 when they are the same and 0 when otherwise.
 */

int _strcmp(char *str, int num, ...)
{
char *str2;
va_list valist;
int i;
va_start(valist, num);

for (i = 0; i < num; i++)
{
str2 = va_arg(valist, char *);
if (strcmp(str2, str) == 0)
return (0);
}
va_end(valist);
return (1);
}
