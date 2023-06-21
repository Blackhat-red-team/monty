#include "monty.h"
/**
* free_stack - unlinks a double-linked list
* @head: head front queue the stack
*/
void free_stack(stack_t *head)
{
stack_t *aux;

aux = head;
while (head)
{
aux = head->next;
free(head);
head = aux;
}
}
