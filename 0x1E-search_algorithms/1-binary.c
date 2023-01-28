#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - search using binary search
 *
 * @array: pointer to first element
 * @size: number of elements
 * @value: value to search for
 *
 * Return: -1 if not present
 */
int binary_search(int *array, size_t size, int value)
{
int max = size;
int mid = size / 2;
int min = 0;
int i, j;

if (array == NULL)
{
return (-1);
}
for (i = 0; i < max; i++)
{
if (mid != max - 1)
{
mid = (min + max - 1) / 2;
printf("Searching in array: ");
for (j = min; j < max; j++)
{
printf("%d", array[j]);
if (j < max - 1)
printf(", ");
}
printf("\n");
if ((value > array[mid]) && (array[mid] != array[max - 1]))
{
min = mid + 1;
}
if ((value < array[mid]) && (array[mid] != array[max - 1]))
{
max = mid;
}
if (value == array[mid])
{
return (mid);
}
}
}
return (-1);
}
