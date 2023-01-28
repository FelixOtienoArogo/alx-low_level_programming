
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *linear_search - function that searches for a value in an array of int
 *
 *@array: pointer to the first element of the array
 *@size: number of elements in array
 *@value: the value to search for
 *
 *Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
int max = size;
int i = -1;

if (array == NULL)
{
return (i);
}
for (i = 0; i < max; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (value == array[i])
{
return (i);
}
}
return (-1);
}
