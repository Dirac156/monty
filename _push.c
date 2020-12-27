#include "monty.h"

/**
  *_push - add an element in the stack
  *@head: the head of the list.
  *@argument: the argument to use.
  */
void _push(stack_t **head, unsigned int argument)
{
stack_t *tm, *new = malloc(sizeof(stack_t));
if (!new)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
new->n = argument;
if (!(*head))
{
(*head) = new;
}
else
{
tm = *head;
new->next = tm;
tm->prev = new;
*head = new;
}
}
