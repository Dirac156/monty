#include "monty.h"

void _rotl(stack_t **head, unsigned int arg)
{
stack_t *tm, *t;
(void)arg;
if (*head && (*head)->next)
{
tm = (*head);
t = tm->next;
(*head) = tm->next;
while (t->next)
{
t = t->next;
}
t->next = tm;
tm->prev = t;
tm->next = NULL;
}
}
