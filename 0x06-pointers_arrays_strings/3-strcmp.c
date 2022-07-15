#include<stdio.h>
#include<string.h>

/**
 * _strcmp - this function compares strings pointed to by s1 and s2
 * @s1: first pointer
 * @s2: second pointer
 *
 * Return: comparison.
 */
int _strcmp(char *s1, char *s2)
{
int i, j;
j = strlen(s1) + 1;
for (i = 0; i < j; i++)
{
if(*(s1 + i) != *(s2 + i))
return (*(s1 + i) - *(s2 + i));
}
 return (0);
}
