#include<stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - a function that executes a function given as a parameter
 *on each elements of an array
 *
 *@array: the array
 *@size: the size of the array
 *@action: pointer to the function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0; i < (int)size; i++)
{
action(array[i]);
}
}
