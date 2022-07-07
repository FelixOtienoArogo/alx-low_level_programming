#include "main.h"

/**
 *print_line - Entry point
 *@n: First member
 *
 *Return: Always 0 (Success)
 */

void print_line(int n)
{
int i;
for (i = 0; i < n ; i++)
{
if (n > 0)
_putchar ('_');
}
_putchar ('\n');
}
