#include "3-calc.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *get_op_func - selects the correct function to perform the operation asked by
 *by user
 *@s: first member
 *
 *Return: the correct function
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (i < 5)
{
if (*s == *ops[i].op)
return (ops[i].f);
i++;
}
return (ops[i].f);
}
