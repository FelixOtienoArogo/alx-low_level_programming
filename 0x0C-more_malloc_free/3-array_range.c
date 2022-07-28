#include <stdio.h>
#include<stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: lower limit
 * @max: upper limit
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int *array_range(int min, int max)
{
int *arr;
int i;
if (min > max)
return (NULL);

arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);

for (i = min; i <= max; i++)
arr[i] = i;
return (arr);
}
