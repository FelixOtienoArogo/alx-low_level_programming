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
int i, j;
j = n;
i = 0;
for (; i < j;)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}

