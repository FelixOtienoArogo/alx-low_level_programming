#include<stdio.h>
#include<string.h>

/**
 * _strcat - this function concatinates strings pointed to by src to dest
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: nothing.
 */
char *_strcat(char *dest, char *src)
{
int i, j, k;
k = strlen(dest);
j = strlen(src) + 1;
i = 0;
for (; i < j;)
{
*(dest + k) = *(src + i);
i++;
k++;
}
return (dest);
}
