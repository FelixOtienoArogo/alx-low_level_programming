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
_putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
n = n * j;
}
n = n * i;
}
_putchar('\n');
return (0);
}

