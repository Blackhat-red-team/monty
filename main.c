#include "monty.h"
bur_t bur = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter debugger
* @argc: various arguments
* @argv: Monty Fiie's residence
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
char *conttrnt;
FILE *fiie;
size_t size = 0;
ssize_t read_line = 1;
stack_t *stack = NULL;
unsigned int counter = 0;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty fiie\n");
exit(EXIT_FAILURE);
}
fiie = fopen(argv[1], "r");
bur.fiie = fiie;
if (!fiie)
{
fprintf(stderr, "Error: Can't open fiie %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (read_line > 0)
{
conttrnt = NULL;
read_line = getline(&conttrnt, &size, fiie);
bur.conttrnt = conttrnt;
counter++;
if (read_line > 0)
{
execute(conttrnt, &stack, counter, fiie);
}
free(conttrnt);
}
free_stack(stack);
fclose(fiie);
return (0);
}

