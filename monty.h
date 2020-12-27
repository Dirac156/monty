#ifndef __MONTY_H__
#define __MONTY_H__
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char **tokenaization(char *str);
void execute_command(char **, unsigned int, stack_t **, char *, FILE *);
void _pint(stack_t **stack, unsigned int line_number);
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _sub(stack_t **head, unsigned int argument);
void _div(stack_t **head, unsigned int argument);
void _mul(stack_t **head, unsigned int argument);
void _mod(stack_t **head, unsigned int argument);

void free_double(char **s);
int _strlen_space(char *s);
int _strcmp(char *str, int num, ...);
int _strlen(char *s);
int check_argument(char **tokens, char *, FILE *);
void free_list(stack_t *head);

void check_others(char **tokens, char *s, FILE *file);
extern int line_number;
extern stack_t *head;
#endif
