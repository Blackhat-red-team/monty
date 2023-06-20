#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;
/**
 * struct bur_s - variables --args, --fie, --line
 * @arg: value
 * @fiie: Monty Fiie is mentioned
 * @conttrnt: lines conttrnt continuing
 * @lffiy: fleag Flagging change stack <-> queue
 * Description: ideals throughout the programme
 */
typedef struct bur_s
{
char *arg;
FILE *fiie;
char *conttrnt;
int lffiy;
}  bur_t;
extern bur_t bur;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int fiie);
char  *clean_line(char *conttrnt);
void f_pnsrt(stack_t **head, unsigned int number);
void f_pastac(stack_t **head, unsigned int number);
void f_pdiv(stack_t **head, unsigned int number);
int execute(char *conttrnt, stack_t **head, unsigned int counter, FILE *fiie);
void free_stack(stack_t *head);
void f_ssop(stack_t **head, unsigned int counter);
void f_sprp(stack_t **head, unsigned int counter);
void f_added(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_devs(stack_t **head, unsigned int counter);
void f_mmul(stack_t **head, unsigned int counter);
void f_cmod(stack_t **head, unsigned int counter);
void f_pascii(stack_t **head, unsigned int counter);
void f_petr(stack_t **head, unsigned int counter);
void f_twist(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addelode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void f_qsaue(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);
#endif

