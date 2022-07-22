#include<stdio.h>
#include<string.h>

/**
 * _strspn - this function gets the length of a substring
 * @s: first pointer
 * @accept: second pointer
 *
 * Return: the number of bytes in the initial segment of s consisting of acce.
 */
int _strspn(char *s, char *accept)
{
int i, j, k, l, m;
j = strlen(s) + 1;
l = strlen(accept) + 1;
m = 0;
for (i = 0; i < j && (*(s + i) != ' '); i++)
{
for (k = 0; k < l; k++)
{
if ((*(s + i) == *(accept + k)) && j > 1 && l > 1)
{
m = i + 1;
}
}
}
return (m);
}
