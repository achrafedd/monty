#include "monty.h"
/**
 * _pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @line: line number
 */
void _pstr(stack_t **head, unsigned int line)
{
	stack_t *curr;
	(void)line;

	curr = *head;
	while (curr)
	{
		if (curr->n > 127 || curr->n <= 0)
		{
			break;
		}
		printf("%c", curr->n);
		curr = curr->next;
	}
	printf("\n");
}