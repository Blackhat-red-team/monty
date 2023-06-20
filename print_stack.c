#include "monty.h"
/**
 * f_pastac - displays the stack
 * @head: stack pile head
 * @counter: no used
 * Return: no 0 return
*/
void f_pastac(stack_t **head, unsigned int counter)
{
stack_t *m;
(void)counter;

m = *head;
if (m == NULL)
return;
while (m)
{
printf("%d\n", m->n);
m = m->next;
}
}

