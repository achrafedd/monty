#include "monty.h"
/**
 * _pall - prints the stack
 * @head: stack head
 * @line: line number
 */
void _pall(stack_t **head, unsigned int line)
{
	stack_t *temp;
	(void)line;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
