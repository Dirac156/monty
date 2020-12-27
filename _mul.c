#include "monty.h"

/**
  *_mul - does
  *@head: the head of the list.
  *@argument: the argument to use.
  */
void _mul(stack_t **head, unsigned int argument)
{
unsigned int subt;
subt = (*head)->n * ((*head)->next)->n;
_pop(head, argument);
_pop(head, argument);
_push(head, subt);
}
