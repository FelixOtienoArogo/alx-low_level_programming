#include "3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *main - to test the code
 *
 *Return: nothing success
 */
int main(int argc, char *argv[])
{
int i;
if (argc)
i = get_op_func(argv[2])(atoi(argv[1]),atoi( argv[3]));
printf("%d/n", i);

return (0);
}
