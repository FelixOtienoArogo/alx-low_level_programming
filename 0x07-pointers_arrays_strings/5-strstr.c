#include "main.h"
#include<string.h>
/**
 * _strstr - this function locates a substring
 * @haystack: first pointer
 * @needle: second pointer
 *
 * Return: the number of bytes in the initial segment of s consisting of acce.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k, l;
j = strlen(haystack) + 1;
l = strlen(needle) + 1;

for (k = 0; k < l; k++)
{
for (i = 0; i < j; i++)
{
if ((*(haystack + i) == *(needle + k))
&& (*(haystack + i + l - 2) == *(needle + k + l - 2)))
{
return (haystack + i);
}
else if ((i == j - 1 && (*(haystack + i) != *(needle + k))) || j < 2 || l < 2)
return (0);
}
}
return (0);
}
