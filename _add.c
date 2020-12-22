#include "monty.h"

/**
  *_add - does
  *@head: the head of the list.
  *@argument: the argument to use.
  */
void _add(stack_t **head, unsigned int argument)
{
unsigned int sum;
if (!(*head) || !((*head)->next))
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
sum = (*head)->n + ((*head)->next)->n;
_pop(head, argument);
_pop(head, argument);
_push(head, sum);
}
