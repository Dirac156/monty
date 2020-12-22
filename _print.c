#include "monty.h"

/**
  *_print - print all element in the list.
  *@head: the head of the list.
  *@argument: the argument to use.
  */
void _print(stack_t **head, unsigned int argument)
{
(void)argument;
printf("%d\n", (*head)->n);
}
