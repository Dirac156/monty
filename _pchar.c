#include "monty.h"



void _pchar(stack_t **head, unsigned int arg)
{
(void)arg;
if ((*head)->n >= 0 && (*head)->n <= 255)
{
fprintf(stdout, "%c\n", (*head)->n);
}
else
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
exit(EXIT_FAILURE);
}
}
