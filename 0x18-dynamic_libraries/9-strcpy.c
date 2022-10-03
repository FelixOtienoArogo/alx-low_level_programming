#include<stdio.h>
#include<string.h>

/**
 * _strcpy - this function copies a string pointed to by src to dest
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: nothing.
 */
char *_strcpy(char *dest, char *src)
{
int i, j;
j = strlen(src) + 1;
i = 0;
for (; i < j;)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
