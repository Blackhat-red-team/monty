#include "monty.h"
/**
 * f_cmod - calculates the remainder of the second's division
 * top stacking element by the top stacking element
 * @head: stack pile head
 * @counter: line_number
 * Return: no 0 return
*/
void f_cmod(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
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
aux = h->next->n % h->n;
h->next->n = aux;
*head = h->next;
free(h);
}
