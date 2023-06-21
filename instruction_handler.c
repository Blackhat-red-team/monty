#include "monty.h"
/**
* execute - executes out opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner Monty's file Poiner
* @content: line content
* Return: no 0 return
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_pnsrt}, {"pall", f_pastac}, {"pint", f_pdiv},
				{"pop", f_ssop},
				{"swap", f_sprp},
				{"add", f_added},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_devs},
				{"mul", f_mmul},
				{"mod", f_cmod},
				{"pchar", f_pascii},
				{"pstr", f_petr},
				{"rotl", f_twist},
				{"rotr", f_rotr},
				{"queue", f_qsaue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bur.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
