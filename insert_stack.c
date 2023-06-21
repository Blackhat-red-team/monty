#include "monty.h"
/**
 * f_pnsrt - node to the stack be added
 * @head: stack pile head
 * @counter: line_number
 * Return: no 0 return
*/
void f_pnsrt(stack_t **head, unsigned int counter)
{
int n, y = 0, fleag = 0;

if (bur.arg)
{
if (bur.arg[0] == '-')
y++;
for (; bur.arg[y] != '\0'; y++)
{
if (bur.arg[y] > 57 || bur.arg[y] < 48)
fleag = 1; }
if (fleag == 1)
{ fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(bur.file);
free(bur.content);
free_stack(*head);
exit(EXIT_FAILURE); }}
else
{ fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(bur.file);
free(bur.content);
free_stack(*head);
exit(EXIT_FAILURE); }
n = atoi(bur.arg);
if (bur.lffiy == 0)
addelode(head, n);
else
addqueue(head, n);
}
