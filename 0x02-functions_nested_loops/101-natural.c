#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, n;
n = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
n = n + i;
}
}
_putchar(((n / 100000) % 10) + '0');
_putchar(((n / 10000) % 20) + '0');
_putchar(((n / 1000) % 240) + '0');
_putchar(((n / 100) % 2440) + '0');
_putchar(((n / 10) % 24420) + '0');
_putchar((n % 10) + '0');
_putchar('\n');
return (0);
}
