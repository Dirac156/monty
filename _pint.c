#include "monty.h"

/**
  *_pint - print all element in the list.
  *@head: the head of the list.
  *@argument: the argument to use.
  */
void _pint(stack_t **head, unsigned int argument)
{
(void)argument;
fprintf(stderr, "%d\n", (*head)->n);
}
