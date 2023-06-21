#include "monty.h"
/**
 * f_pastac - displays the stack
 * @head: stack pile head
 * @counter: no used
 * Return: no 0 return
*/
void f_pastac(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;
if (h == NULL)
return;
while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
