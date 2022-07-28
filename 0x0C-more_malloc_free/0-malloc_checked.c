#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
/**
 * *malloc_checked - allocates memeory using malloc
 * @b: the variable
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int *malloc_checked(unsigned int b)
{
int *arr;

arr = malloc(sizeof(b));

if (arr == NULL)
{
exit(98);
}

return (arr);
}
