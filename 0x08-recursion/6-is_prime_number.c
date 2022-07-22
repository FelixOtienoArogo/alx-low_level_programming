#include<stdio.h>
#include<string.h>
#include "main.h"

/**
* prime - this function returns if n is prime or not
* @n: the number to rise
* @index: just a counter
*
* Return: length of the string.
*/
int prime(int n, int index)
{
if(n < 2)
return (0);
if (index > 0)
{
if (n % index == 0)
return (0);
else
prime (n, index - 1);
}
if (n % index != 0)
return (2);
return (1);
}

/**
* is_prime_number - this function returns if n is prime or not
* @n: the number to rise
*
* Return: length of the string.
*/

int is_prime_number(int n)
{
int index;
index = n / 2;
return (prime(n, index));
}
