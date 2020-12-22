#include "monty.h"

/**
  *_swap - swap two element of the list.
  *@head: the head of the list.
  *@argument: the argument to use.
  */
void _swap(stack_t **head, unsigned int argument)
{
stack_t *t1, *t2, *t3;
(void)argument;
(void)head;
if (!(*head) || !((*head)->next))
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
t1 = (*head);
t2 = (*head)->next;
t3 = t2->next;
t1->next = NULL;
t2->next = NULL;
(*head) = t2;
(*head)->next = t1;
t1->next = t3;
(*head)->prev = NULL;
}
