#include<stdio.h>
#include<string.h>

/**
 * leet - this function compares strings pointed to
 * @str: first pointer
 *
 *
 * Return: pointer.
 */
char *leet(char *str)
{
int k, l;
l = strlen(str);
for (k = 0; k <= l; k++)
{
if (*(str + k) == 'a' || *(str + k) == 'A')
*(str + k) = '4';
else if (*(str + k) == 'e' || *(str + k) == 'E')
*(str + k) = '3';
else if (*(str + k) == 'o' || *(str + k) == 'O')
*(str + k) = '0';
else if (*(str + k) == 't' || *(str + k) == 'T')
*(str + k) = '7';
else if (*(str + k) == 'l' || *(str + k) == 'L')
*(str + k) = '1';
}
return (str);
}
