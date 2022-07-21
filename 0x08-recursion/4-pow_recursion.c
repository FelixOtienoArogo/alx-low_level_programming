#include<stdio.h>
#include<string.h>
#include "main.h"

/**
* _pow_recursion - this function returns the value of x raised to y
* @x: the number to rise
* @y: the power
*
* Return: length of the string.
*/

int _pow_recursion(int x, int y)
{
int a;
a = 1;

if (y > 0)
a = x * _pow_recursion(x, y - 1);
else if (y == 0)
a = 1;
else if (y < 0)
a = -1;
return (a);
}
