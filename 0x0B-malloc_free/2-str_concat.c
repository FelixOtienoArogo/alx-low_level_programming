#include <stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *str_concat(char *s1, char *s2)
{
char *arr;
int i, size1, size2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
size1 = strlen(s1);
size2 = strlen(s2);
arr = malloc(sizeof(char) * (size1 + size2) +1);
if (arr == NULL)
return (NULL);

for (i = 0; i <= size1; i++)
arr[i] = s1[i];
for (i = 0; i <= size2; i++)
arr[i + size1] = s2[i];
return (arr);
}
