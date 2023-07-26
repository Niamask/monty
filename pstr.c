#include "monty.h"

/**
 * _pstr - function to pstr.
 * @stack: the pile
 * @line_number: the number
 *
 * Return: void
 */

void  _pstr(stack_t **stack, unsigned  int line_number)
{
	int nb;
	stack_t *temp = *stack;

	(void) line_number;
	if (*stack == NULL)
	{
		printf("\n");
		return;
	}

	while (temp != NULL)
	{
		nb = temp->n;
		if (!(nb >= 1 && nb <= 127) || nb == 0)
			break;
		printf("%c", nb);
		temp = temp->next;
	}
	printf("\n");
}
