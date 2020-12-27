#include "monty.h"

void _rotr(stack_t **head, unsigned int arg)
{
stack_t *tm, *t;
(void)arg;
if (*head)
{
tm = (*head);
t = tm;
while (tm->next)
tm = tm->next;
(*head) = tm;
(tm->prev)->next = NULL;
(*head)->next = t;
t->prev = (*head);
}
}
