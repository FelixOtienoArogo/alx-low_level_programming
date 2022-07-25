#include <stdio.h>
#include<stdlib.h>
/**
 * *create_array - creates an array of chars, and initialises it with a char
 * @size: size of array
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
arr = malloc(sizeof(c) * size);
if (size == 0)
return (0);
for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
