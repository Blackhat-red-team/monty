#include "monty.h"
/**
 * addelode - to the head stack, add a node
 * @head: head front of queue stack
 * @n: new_value
 * Return: no 0 return
*/
void addelode(stack_t **head, int n)
{

stack_t *new_nore, *auax;

auax = *head;
new_nore = malloc(sizeof(stack_t));
if (new_nore == NULL)
{ printf("Error\n");
exit(0); }
if (auax)
auax->prev = new_nore;
new_nore->n = n;
new_nore->next = *head;
new_nore->prev = NULL;
*head = new_nore;
}
