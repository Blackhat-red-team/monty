#include "monty.h"
/**
* free_stack - unlinks a double-linked list
* @head: head front queue the stack
*/
void free_stack(stack_t *head)
{
stack_t *auax;

auax = head;
while (head)
{
auax = head->next;
free(head);
head = auax;
}
}
