#include "monty.h"
/**
 *_sub- sustration
 *@head: stack head
 *@line: line_number
 */
void _sub(stack_t **head, unsigned int line)
{
	stack_t *temp;
	int sus, nodes;

	temp = *head;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sus = temp->next->n - temp->n;
	temp->next->n = sus;
	*head = temp->next;
	free(temp);
}
