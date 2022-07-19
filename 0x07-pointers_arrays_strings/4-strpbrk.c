#include "main.h"
#include<string.h>
/**
 * _strpbrk - this function searches a string for any of a set of bytes
 * @s: first pointer
 * @accept: second pointer
 *
 * Return: the number of bytes in the initial segment of s consisting of acce.
 */
char *_strpbrk(char *s, char *accept)
{
int i, j, k, l;
j = strlen(s) + 1;
l = strlen(accept) + 1;

for (i = 0; i < j; i++)
{
for (k = 0; k < l; k++)
{
if ((*(s + i) == *(accept + k)))
{
return (s + i);
}
else if (i == j - 1 && (*(s + i) != *(accept + k)))
return (0);
}
}
return (0);
}
