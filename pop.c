#include "monty.h"
/**
 * _pop - prints the top
 * @head: stack head
 * @line: line number
 */
void _pop(stack_t **head, unsigned int line)
{
	stack_t *curr;

	if (*head == NULL)
	{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
	}
	curr = *head;
	*head = curr->next;
	free(curr);
}
