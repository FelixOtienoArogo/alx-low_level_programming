#include <math.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
long int i, j, a;
for (i = 2; i <= sqrt(612852475143) ; i++)
{
if (612852475143 % i == 0)
{
for (j = 2; j <= sqrt(i); j++)
{
if (i % j == 0)
a = j;
}
}
}
printf("%ld", a);
printf("\n");
return (0);
}
