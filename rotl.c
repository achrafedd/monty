#include "monty.h"
/**
 *_rotl- rotates the stack to the top
 *@head: stack head
 *@line: line number
 */
void _rotl(stack_t **head, unsigned int line)
{
	stack_t *curr = *head, *temp;
	(void)line;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	temp = (*head)->next;
	temp->prev = NULL;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = *head;
	(*head)->next = NULL;
	(*head)->prev = curr;
	(*head) = temp;
}
