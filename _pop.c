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
if (!(*head) || count_push == 0)
{
fprintf(stderr, "L%d: can't pop an empty stacks\n", line_number);
exit(EXIT_FAILURE);
}
tm = (*head);
(*head) = (*head)->next;
free(tm);
}
