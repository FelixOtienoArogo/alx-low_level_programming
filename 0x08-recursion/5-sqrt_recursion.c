#include<stdio.h>
#include<string.h>
#include "main.h"

/**
* _sqrt_guess - this function returns the natural square root of a number
* @n: the number
* @low: the low end
* @high: the higher end
*
* Return: length of the string.
*/
int _sqrt_guess(int low, int high, int n)
{
int mid;
if (n == 1)
{
mid = 1;

return (mid);
}
else if (n == 0)
mid = 0;
else if (n < 0)
mid = -1;
else if (n > 1)
{
mid = (low + high) / 2;
if ((mid) *(mid) <= n
&& (mid + 1) * (mid + 1) > n)
{
return (mid);
}
else if ((mid) *(mid) < n)
{
_sqrt_guess(mid + 1, high, n);
}
else
{
if (n % 2 == 0)
return (_sqrt_guess(low, mid, n));
else
return (_sqrt_guess(low, mid - 1, n));
}
}
if ((mid) *(mid) == n)
return (mid);
else
return (-1);
}

/**
* _sqrt_recursion - this function returns the natural square root of a num
* @n: the number
*
* Return: length of the string.
*/

int _sqrt_recursion(int n)
{
int high, low;
low = 0;
high = n;
return (_sqrt_guess(low, high, n));
}
