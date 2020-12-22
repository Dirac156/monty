#include "monty.h"

/**
  *_sub - does
  *@head: the head of the list.
  *@argument: the argument to use.
  */
void _sub(stack_t **head, unsigned int argument)
{
unsigned int subt;
if (!(*head) || !((*head)->next))
{
fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
subt = - (*head)->n + ((*head)->next)->n;
_pop(head, argument);
_pop(head, argument);
_push(head, subt);
}
