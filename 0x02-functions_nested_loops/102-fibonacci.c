#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
long int i, c, d, temp;
c = 1;
d = 0;
_putchar(d + '0');
_putchar(',');
_putchar(' ');
for (i = 1; i < 50; i++)
{
int x, w, v, u, k, l, n, p, q, r, s, t;
x = (c / 100000000000) % 10;
w = (c / 10000000000) % 10;
v = (c / 1000000000) % 10;
u = (c / 100000000) % 10;
k = (c / 10000000) % 10;
l = (c / 1000000) % 10;
n = (c / 100000) % 10;
p = (c / 10000) % 10;
q = (c / 1000) % 10;
r = (c / 100) % 10;
s = (c / 10) % 10;
t = c % 10;
if (c > 100000000000)
_putchar(x + '0');
if (c > 10000000000)
_putchar(w + '0');
if (c > 1000000000)
_putchar(v + '0');
if (c > 100000000)
_putchar(u + '0');
if (c > 10000000)
_putchar(k + '0');
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
if (i != 49)
{
_putchar(',');
_putchar(' ');
}
temp = d;
d = c;
c = temp + c;
}
_putchar('\n');
return (0);
}

