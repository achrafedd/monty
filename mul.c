#include "monty.h"
/**
 * _mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @line: line number
 */
void _mul(stack_t **head, unsigned int line)
{
	stack_t *curr;
	int len = 0, temp;

	curr = *head;
	while (curr)
	{
		curr = curr->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	curr = *head;
	temp = curr->next->n * curr->n;
	curr->next->n = temp;
	*head = curr->next;
	free(curr);
}
