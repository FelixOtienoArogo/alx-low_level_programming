#include <stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * *argstostr - concatenates arguments to string
 * @ac: the number of arguments
 * @av: the argv
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *argstostr(int ac, char **av)
{
char *arr;
int i;
if (ac == 0)
return (NULL);
if (av == NULL)
return (NULL);

arr = malloc(sizeof(*arr) * ac);
if (arr == NULL)
return (NULL);

for (i = 0; i < ac; i += 1)
{
strcat(arr, av[i]);
strcat(arr, "\n");
}
return (arr);
}
