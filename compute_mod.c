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
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
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
auax = m->next->n % m->n;
m->next->n = auax;
*head = m->next;
free(m);
}
