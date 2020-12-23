#include "monty.h"

/**
  *_pall - print all number in the list
  *@head: the head of the list.
  *@argument: the argument to use.
  */
void _pall(stack_t **head, unsigned int argument)
{
stack_t *tm;
(void)argument;
if (!(*head) || count_push == 0)
return;
tm = *head;
while (tm)
{
printf("%d\n", tm->n);
tm = tm->next;
}
}
