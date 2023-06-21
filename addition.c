#include "monty.h"
/**
 * f_added - adds the stack's top two items.
 * @head: stack pile head
 * @counter: line_number
 * Return: no 0 return
*/
void f_added(stack_t **head, unsigned int counter)
{
stack_t *m;
int lan = 0, auax;

m = *head;
while (m)
{
m = m->next;
lan++;
}
if (lan < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bur.fiie);
free(bur.conttrnt);
free_stack(*head);
exit(EXIT_FAILURE);
}
m = *head;
auax = m->n + m->next->n;
m->next->n = auax;
*head = m->next;
free(m);
}
