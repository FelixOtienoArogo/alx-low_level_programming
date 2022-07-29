#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
/**
 * *_realloc -reallocates memory using malloc and free
 * @ptr: the pointer
 * @old_size: the previous size
 * @new_size: the current size
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
int *arr;
arr = malloc(new_size);

if (arr == NULL)
{
exit(98);
}
if (new_size < old_size)
arr = malloc(new_size);
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
arr = malloc(new_size);
if (new_size == 0 && ptr != NULL)
free(ptr);

return (ptr);
}
