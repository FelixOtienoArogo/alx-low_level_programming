#include "main.h"
#include<string.h>
/**
 * _strstr - this function locates a substring
 * @haystack: first pointer
 * @needle: second pointer
 *
 * Return: the number of bytes in the initial segment of s consisting
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k, l;
j = strlen(haystack) + 1;
l = strlen(needle) + 1;

for (i = 0; i < j && (*(haystack + i) != ','); i++)
{
for (k = 0; k < l; k++)
{
if ((*(haystack + i) == *(needle + k)))
{
if (*(haystack + i - 1) == ' ')
return (haystack + k);
}
}
}
return (0);
}
