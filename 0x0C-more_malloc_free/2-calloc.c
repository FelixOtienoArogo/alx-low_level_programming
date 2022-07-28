#include <stdio.h>
#include<stdlib.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: first member
 * @size: the size of the array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i;
arr = malloc(nmemb * size);
if (arr == NULL)
return (0);

if (size == 0)
return (0);
for (i = 0; i < nmemb; i++)
arr[i] = 0;
return (arr);
}
