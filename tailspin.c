#include "monty.h"
/**
  *f_rotr- rotates brings the stack around to the base
  *@head: stack pile head
  *@counter: line_number
  *Return: no 0 return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *coped;

coped = *head;
if (*head == NULL || (*head)->next == NULL)
{
return;
}
while (coped->next)
{
coped = coped->next;
}
coped->next = *head;
coped->prev->next = NULL;
coped->prev = NULL;
(*head)->prev = coped;
(*head) = coped;
}
