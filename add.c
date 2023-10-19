#include "monty.h"
/**
 * _add - adds the top two elements of the stack.
 * @head: stack head
 * @line: line number
 */
void _add(stack_t **head, unsigned int line)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", line);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	curr = *head;
	temp = curr->n + curr->next->n;
	curr->next->n = temp;
	*head = curr->next;
	free(curr);
}
