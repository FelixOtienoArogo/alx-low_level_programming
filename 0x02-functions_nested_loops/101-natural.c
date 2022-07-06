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
_putchar((n % 100000) + '0');
_putchar((n % 10000) + '0');
_putchar((n % 1000) + '0');
_putchar((n % 100) + '0');
_putchar((n % 10) + '0');
return (0);
}
