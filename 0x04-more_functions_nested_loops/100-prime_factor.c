#include <math.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
long int i, a;
for (i = 2; i < sqrt(612852475143) ; i++)
{
if (612852475143 % i == 0)
a = i;
}
printf("%ld", a);
printf("\n");
return (0);
}
