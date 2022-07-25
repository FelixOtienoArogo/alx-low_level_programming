#include <stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * *_strdup - creates an array of chars, which is a copy
 * @str: the string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strdup(char *str)
{
char *arr;
int i, size;
size = strlen(str);
arr = malloc(sizeof(char) * size + 1);
if (arr == NULL)
return (0);

if (str == NULL)
return (0);
for (i = 0; i <= size; i++)
arr[i] = str[i];

return (arr);
}
