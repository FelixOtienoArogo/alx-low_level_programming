#include "main.h"
/**
 *print_to_98 - Entry point
 *@n: First member
 *
 *
 *Return: Always 0 (Success)
 */

void print_to_98(int n)
{
int i;
if ((n <= 98) && (n >= 0))
{
for (i = n ; i <= 98; i++)
{
if (i < 10)
{  
_putchar(i +  '0');
if (i < 98)
{
_putchar(',');
_putchar(' ');
}
} 
if (i >= 10 )
{
int j, k;
j = i % 10;
k = (i / 10) % 10;
_putchar(k + '0');
_putchar(j + '0');
if (i < 98)
{
_putchar(',');
_putchar(' ');
}
}
}
 _putchar('\n');
}

if (n > 98 )
{
for (i = n ; i >= 98; i--)
{
if (i >= 100)
{
int b, c, d;
d = i % 10;
c = (i / 10) % 10;
b = (i / 100) % 10;
_putchar(b +  '0');
_putchar(c +  '0');
_putchar(d +  '0');
 }
if ((i < 100) && (i >= 98))
{
int x, y;
x = i % 10;
y = (i / 10) % 10;
_putchar(y + '0');
_putchar(x + '0');
}
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}

if (n < 0)
{
int m;
for (i = n ; i <= 98; i++)
{
if (i < 0)
{
int e, f;
m = 0 - i;
e = (m/10) % 10;
f = m % 10;
_putchar('-');
if(m > 9)
{
_putchar(e + '0');
}
_putchar(f +'0');
if (i < 98)
{
_putchar(',');
_putchar(' ');
}
}
if ((i < 10)&&(i >= 0))
{
_putchar(i +  '0');
if (i < 98)
{
_putchar(',');
_putchar(' ');
}
}
if (i >= 10 )
{
int j, k;
j = i % 10;
k = (i / 10) % 10;

_putchar(k + '0');
_putchar(j + '0');
if (i < 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
