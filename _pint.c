#include "monty.h"

/**
  *_pint - print all element in the list.
  *@head: the head of the list.
  *@argument: the argument to use.
  */
void _pint(stack_t **head, unsigned int argument)
{
(void)argument;
if (!(*head) || count_push == 0)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
fprintf(stderr, "%d\n", (*head)->n);
}
