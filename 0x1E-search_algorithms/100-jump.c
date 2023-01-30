#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 *jump_search - searches for a value using Jump search algorithm
 *
 *@array: the pointer to the first element in the array
 *@size: size of the array
 *@value: the value to search for
 *
 *Return: -1 if absent and index
 */
int jump_search(int *array, size_t size, int value)
{
int max = size;
int step = sqrt(size);
int i, j;
if (array == NULL)
{
return (-1);
}
for (i = 0; i < max; i += step)
{
if (array[i] < value)
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] >= value)
{
printf("Value found between indexes [%d] and [%d]\n", i - step, i);
for (j = i - step; j <= i; j++)
{
printf("Value checked array[%d] = [%d]\n", j, array[j]);
if (array[j] == value)
{
return (j);
}
}
}
}
if(i > max)
{
printf("Value found between indexes [%d] and [%d]\n", i - step, i);
printf("Value checked array[%d] = [%d]\n", i - step, array[i - step]);
}
return (-1);
}
