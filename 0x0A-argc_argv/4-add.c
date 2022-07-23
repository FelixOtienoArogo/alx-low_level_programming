#include <stdio.h>
#include <stdlib.h>
/**
 *main - main entry point
 *@argc: first member
 *@argv: second argument
 *
 *Return: nothing
 */

int main(int argc, char *argv[])
{
int i, result;
result = 0;
for (i = 1; i < argc; i++)
{
if (*argv[i] < '0' || *argv[i] > '9')
{
printf("Error\n");
return (1);
}
else
result = (result) +(atoi(argv[i]));
}
printf("%d\n", result);
return (0);
}
