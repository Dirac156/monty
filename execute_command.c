#include "monty.h"

/**
  *execute_command - execute user_command
  *@tokens: user command
  */

void execute_command (char **tokens)
{
printf("Command: %s argument: %s line: %d\n", tokens[0], tokens[1], line_number);
}
