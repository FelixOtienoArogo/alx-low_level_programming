#include<stdio.h>
#include<string.h>

/**
 * string_toupper - this function compares strings pointed to by
 * @str: first pointer
 *
 *
 * Return: pointer.
 */
char *string_toupper(char *str)
{
char i, j;
int k, l;
l = strlen(str);
for (k = 0; k <= l; k++)
{
j = 'A';
for (i = 'a'; i <= 'z'; i++)
{
if (*(str + k) == i)
*(str + k) = j;
j++;
}
}
return (str);
}
