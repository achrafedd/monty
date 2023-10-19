#include "monty.h"
/**
 *_rotr- rotates the stack to the bottom
 *@head: stack head
 *@line: line number
 */
void _rotr(stack_t **head, unsigned int line)
{
	stack_t *copy;
	(void)line;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
