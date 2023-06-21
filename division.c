#include "monty.h"
/**
 * f_devs - splits the two components at the top of the stack.
 * @head: stack pile head
 * @counter: line_number
 * Return: no 0 return
*/
void f_devs(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: can't div, stack too short\n", counter);
fclose(bur.file);
free(bur.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
if (h->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bur.file);
free(bur.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
aux = h->next->n / h->n;
h->next->n = aux;
*head = h->next;
free(h);
}
