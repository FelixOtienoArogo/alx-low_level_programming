#include "main.h"

/**
 *print_diagonal - Entry point
 *@n: First member
 *
 *Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n ; i++)
{
if (n > 0)
{
for (j = 0 ; j < i ; j++)
{
_putchar (' ');
}
_putchar ('\\');
}
if (i != n - 1)
_putchar ('\n');
}
_putchar ('\n');
}
