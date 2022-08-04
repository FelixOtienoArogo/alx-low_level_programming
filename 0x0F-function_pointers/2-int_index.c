#include<stdlib.h>
#include "function_pointers.h"

/**
 *int_index - a function that searches for an integer
 *
 *@array: the array
 *@size: the size of the array
 *@cmp: pointer to the function
 *
 *Return: - the index of the match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, result;
result = 0;
if (size <= 0)
return (-1);
if (array && cmp)
{
for (i = 0; i < (int)size; i++)
{
result = cmp(array[i]);
if (result != 0)
return (i);
}
}
return (-1);
}
