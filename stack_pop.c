#include "monty.h"
/**
 * f_ssop - prints images on the top
 * @head: stack pile head
 * @counter: line_number
 * Return: no 0 return
*/
void f_ssop(stack_t **head, unsigned int counter)
{
stack_t *h;

if (*head == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
fclose(bur.file);
free(bur.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
*head = h->next;
free(h);
}
