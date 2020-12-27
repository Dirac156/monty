#include "monty.h"

/**
  *_pop - remove an element from the list.
  *@head: the head of the list.
  *@argument: the argument to use.
  */
void _pop(stack_t **head, unsigned int argument)
{
stack_t *tm;
(void)argument;
tm = (*head);
(*head) = (*head)->next;
free(tm);
}
