#include "monty.h"
/**
 * f_pascii - the stack's top char is printed,
 * the start of a new line
 * @head: stack pile head
 * @counter: line_number
 * Return: no 0 return
*/
void f_pascii(stack_t **head, unsigned int counter)
{
stack_t *m;

m = *head;
if (!m)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
fclose(bur.fiie);
free(bur.conttrnt);
free_stack(*head);
exit(EXIT_FAILURE);
}
if (m->n > 127 || m->n < 0)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
fclose(bur.fiie);
free(bur.conttrnt);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%c\n", m->n);
}
