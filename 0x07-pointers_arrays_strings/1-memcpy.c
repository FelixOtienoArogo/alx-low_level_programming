#include<stdio.h>
#include<string.h>

/**
 * _memcpy - this function copies a memory area pointed to by src to dest
 * @dest: destination pointer
 * @src: source pointer
,* @n: size
 *
 * Return: nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
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
