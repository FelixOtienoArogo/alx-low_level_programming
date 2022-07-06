#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
long int  i, c, l, n, p, q, r, s, t;
c = 4613732;

for (i = 0 ; i < 50 ; i++)
{
}
l = (c / 1000000) % 10;
n = (c / 100000) % 10;
p = (c / 10000) % 10;
q = (c / 1000) % 10;
r = (c / 100) % 10;
s = (c / 10) % 10;
t = c % 10;

if (c > 1000000)
_putchar(l + '0');
if (c > 100000)
_putchar(n + '0');
if (c > 10000)
_putchar(p + '0');
if (c > 1000)
_putchar(q + '0');
if (c > 100)
_putchar(r + '0');
if (c > 10)
_putchar(s + '0');
_putchar(t + '0');
_putchar('\n');
return (0);
}

