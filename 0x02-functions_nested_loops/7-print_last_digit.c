#include "main.h"

/**
 *print_last_digit - Entry point
 *@c: First member
 *@b: Third member
 *
 *Return: Always 0 (Success)
*/

int print_last_digit(int c)
{
int a;
int b;
if (c >= 0)
a = c % 10;
if (c < 0)
{
a = 0 - c;
a = a % 10;
}
if ((a >= 0) && (a <= 9))
{
_putchar(a + '0');
return (a);
}
else
{
b = a + 'A' - 1;
_putchar(b);
return (b- 'a');
}
}
