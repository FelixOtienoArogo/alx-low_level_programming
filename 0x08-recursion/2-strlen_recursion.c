#include<stdio.h>
#include<string.h>
#include "main.h"

/**
* _strlen_recursion - this function returns the length of a string
* @s: a pointer
*
* Return: length of the string.
*/

int _strlen_recursion(char *s)
{
int a;
a = 0;
if (*s != '\0')
{
a++;
a = a +  _strlen_recursion(s + 1);
}
return (a);
}
