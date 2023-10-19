#include "monty.h"
/**
 * _pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @line: line number
 */
void _pchar(stack_t **head, unsigned int line)
{
	stack_t *curr;

	curr = *head;
	if (!curr)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (curr->n > 127 || curr->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", curr->n);
}
