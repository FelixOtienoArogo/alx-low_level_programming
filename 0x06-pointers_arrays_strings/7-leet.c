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
int k, l, m, n;
char lit1[11] = "aAeEoOtTlL";
char lit2[11] = "4433007711";
l = strlen(str);
/*lit1 = 'a','A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};*/
/*lit2 = {'4', '4', '3', '3', '0', '0','7', '7', '1', '1'};*/
n = strlen(lit1);
for (k = 0; k <= l; k++)
{
for (m = 0; m <= n; m++)
{
if (*(str + k) == *(lit1 + m))
*(str + k) = *(lit2 + m);
}
}
return (str);
}
