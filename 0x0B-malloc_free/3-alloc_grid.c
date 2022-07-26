#include <stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * **alloc_grid - returns pointer to a two dimensional array
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int **alloc_grid(int width, int height)
{
int **arr;
int i;
if (width < 1 || height < 1)
return (NULL);

arr = malloc(sizeof(int *) * height);
for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);
}

if (arr == NULL)
{
for (i = 0; i < height; i++)
{
free(arr[i]);
}
free(arr);
return (NULL);
}
return (arr);
}
