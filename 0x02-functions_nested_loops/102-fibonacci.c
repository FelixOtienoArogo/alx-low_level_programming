#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, j, n;
n = 1;
for (i = 0; i < 50; i++)
{
for (j = i; j > 0; j--)
{
_putchar(((n / 100000) % 10) + '0');
_putchar(((n / 10000) % 20) + '0');
_putchar(((n / 1000) % 240) + '0');
_putchar(((n / 100) % 2440) + '0');
_putchar(((n / 10) % 24420) + '0');
_putchar((n % 10) + '0');
_putchar('\n');

n = n * j;
}
}
return (0);
}

