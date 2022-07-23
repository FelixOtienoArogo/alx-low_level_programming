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
long int i, result;
char **endptr;
endptr = argv;
result = 0;
for (i = 1; i < argc; i++)
{
if (*argv[i] < '0' || *argv[i] > '9')
{
printf("Error\n");
return (1);
}
else
{
result = (result) +(strtol(argv[i], endptr, 10));
if (**endptr != '\0')
{
printf("Error\n");
return (1);
}
}
}
printf("%ld\n", result);
return (0);
}
