#include<stdio.h>
#include<string.h>

/**
 * rot13 - this function compares strings pointed to
 * @str: pointer
 *
 * Return: pointer.
 */
char *rot13(char *str)
{
int k, l, m, n;
char rot1[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot2[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
l = strlen(str);
n = strlen(rot1);
for (k = 0; k < l; k++)
{
for (m = 0; m < n; m++)
{
if (*(str + k) == *(rot1 + m))
*(str + k) = *(rot2 + m);
}
}
return (str);
}
