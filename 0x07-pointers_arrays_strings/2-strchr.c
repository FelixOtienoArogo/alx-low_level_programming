#include<stdio.h>
#include<string.h>

/**
 * _strchr - this function locates a character in a string
 * @s: pointer to the string
 * @c: character
 *
 *
 * Return: pointer.
 */
char *_strchr(char *s, char c)
{
int k, l;
l = strlen(s);
for (k = 0; k <= l; k++)
{
if (*(s + k) == c)
return (s + k);
}
return (0);
}
