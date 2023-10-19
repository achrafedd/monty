#include "monty.h"
/**
 * _mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @line: line number
 */
void _mod(stack_t **head, unsigned int line)
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
        fprintf(stderr, "L%d: can't mod, stack too short\n", line);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    curr = *head;
    if (curr->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", line);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    temp = curr->next->n % curr->n;
    curr->next->n = temp;
    *head = curr->next;
    free(curr);
}
