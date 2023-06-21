#include "monty.h"
/**
 * f_added - adds the stack's top two items.
 * @head: stack pile head
 * @counter: line_number
 * Return: no 0 return
*/
void f_added(stack_t **head, unsigned int counter)
{
stack_t *h;
int lan = 0, aux;

h = *head;
while (h)
{
h = h->next;
lan++;
}
if (lan < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bur.file);
free(bur.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
aux = h->n + h->next->n;
h->next->n = aux;
*head = h->next;
free(h);
}
