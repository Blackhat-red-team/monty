#include "monty.h"
/**
 * f_petr - the string is printed beginning at the top of the stack,
 * followeded by a is news
 * @head: stack pile head
 * @counter: line_number
 * Return: no 0 return
*/
void f_petr(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;
while (h)
{
if (h->n > 127 || h->n <= 0)
{
break;
}
printf("%c", h->n);
h = h->next;
}
printf("\n");
}
