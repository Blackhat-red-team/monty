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
stack_t *h;

h = *head;
if (!h)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
fclose(bur.file);
free(bur.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
if (h->n > 127 || h->n < 0)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
fclose(bur.file);
free(bur.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%c\n", h->n);
}
