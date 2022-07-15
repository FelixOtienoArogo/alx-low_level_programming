#include<stdio.h>
#include<string.h>

/**
 * _strncat - this function concatinates strings pointed to by src to dt
 *t
 * @dest: destination pointer
 * @src: source pointer
 * @n: position
 *
 * Return: nothing.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, k;
k = strlen(dest);
j = strlen(src);

for (i = 0; i < n; i++)
{
if (i < j)
*(dest + k + i) = *(src + i);
}
return (dest);
}
