#include "monty.h"

void _pstr(stack_t **h, unsigned int arg)
{
stack_t *tm;
(void)arg;
if (head)
{
tm = *h;
while (tm)
{
if (tm->n != 0 || (tm->n > 0 && tm->n <= 255))
printf("%c", tm->n);
else
break;
tm = tm->next;
}
printf("\n");
}
}
