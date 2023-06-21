#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack pile head
  *@counter: line_number
  *Return: no 0 return
 */
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *auax;
int surs, noders;

auax = *head;
for (noders = 0; auax != NULL; noders++)
auax = auax->next;
if (noders < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
fclose(bur.fiie);
free(bur.conttrnt);
free_stack(*head);
exit(EXIT_FAILURE);
}
auax = *head;
surs = auax->next->n - auax->n;
auax->next->n = surs;
*head = auax->next;
free(auax);
}
