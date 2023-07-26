#include "monty.h"

/**
 * _pchar - function to pchar.
 * @stack: the pile
 * @line_number: the number
 *
 * Return: void
 */

void  _pchar(stack_t **stack, unsigned  int line_number)
{
	int nb;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		free_stack_t(*stack);

		exit(EXIT_FAILURE);
	}

	nb = (*stack)->nb;
	if (nb >= 32 && nb <= 127)
		printf("%c\n", nb);
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free_stack_t(*stack);

		exit(EXIT_FAILURE);
	}
}
