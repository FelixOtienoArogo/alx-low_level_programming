#include "main.h"

/**
 *print_last_digit - Entry point
 *@c: First member
 *@a: Second member
 *
 *Return: Always 0 (Success)
*/

int print_last_digit(int c)
{
int a;
if (c >= 0)
a = c % 10;
else
{
a = 0 - c;
a = a % 10;
}
_putchar(a + '0');
return (a);
c = 0;
}
