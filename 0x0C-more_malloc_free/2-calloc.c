#include <stdio.h>
#include<stdlib.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: the number of elements
 * @size: the size of the array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);

arr = malloc(size * nmemb);
if (arr == NULL)
return (NULL);

for (i = 0; i < nmemb; i++)
arr[i] = '\0';
return (arr);
}
