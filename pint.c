#include "monty.h"
/**
 * _pint - prints the top
 * @head: stack head
 * @line: line number
 * Return: no return
 */
void _pint(stack_t **head, unsigned int line)
{
    if (*head == NULL)
    {
        fprintf(stderr, "L%u: can't pint, stack empty\n", line);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", (*head)->n);
}