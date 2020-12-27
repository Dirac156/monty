#include "monty.h"

/**
  *_div - does
  *@head: the head of the list.
  *@argument: the argument to use.
  */
void _div(stack_t **head, unsigned int argument)
{
unsigned int subt;
if (((*head)->next)->n > 0)
{
subt = ((*head)->next)->n / (*head)->n;
_pop(head, argument);
_pop(head, argument);
_push(head, subt);
}
else
{
fprintf(stderr, "L%d: division by zero\n", line_number);
free_list(*head);
exit(EXIT_FAILURE);
}
}
