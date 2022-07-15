#include<stdio.h>
#include<string.h>

/**
 * _strncpy - this function copies a string pointed to by src to dest
 * @dest: destination pointer
 * @src: source pointer
,* @n: size
 *
 * Return: nothing.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && *(src + i) != '\0'; i++)
{
*(dest + i) = *(src + i);
}
for (; i < n; i++)
{
*(dest + i) = '\0';
}
return (dest);
}

