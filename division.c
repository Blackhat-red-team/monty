#include "monty.h"
/**
 * f_devs - splits the two components at the top of the stack.
 * @head: stack pile head
 * @counter: line_number
 * Return: no 0 return
*/
void f_devs(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: can't div, stack too short\n", counter);
fclose(bur.fiie);
free(bur.conttrnt);
free_stack(*head);
exit(EXIT_FAILURE);
}
m = *head;
if (m->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bur.fiie);
free(bur.conttrnt);
free_stack(*head);
exit(EXIT_FAILURE);
}
auax = m->next->n / m->n;
m->next->n = auax;
*head = m->next;
free(m);
}
