#include "monty.h"
/**
 * f_pdiv - prints images the top
 * @head: stack pile head
 * @counter: line_number
 * Return: no 0 return
*/
void f_pdiv(stack_t **head, unsigned int counter)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
fclose(bur.file);
free(bur.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}
