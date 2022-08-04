#include "3-calc.h"
#include<stdlib.h>
/**
 *get_op_func - selects the correct function to perform the operation asked by
 *by user
 *@a: first member
 *@b: second member
 *
 *Return: the correct function 
 */
int (*get_op_func(char *s))(int a, int b)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
op_t ops[s](a, b);
}
