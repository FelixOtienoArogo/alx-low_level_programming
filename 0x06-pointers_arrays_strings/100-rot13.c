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
int k, l;
l = strlen(str);
for (k = 0; k <= l; k++)
{
if ((*(str + k) >= 'a' && *(str + k) < 'n') || (*(str + k) >= 'A' && *(str + k) < 'N'))
*(str + k) = *(str + k) + 13;
else if ((*(str + k) >= 'o' && *(str + k) <= 'z') || (*(str + k) >= 'O' && *(str \
+ k) <= 'Z'))
*(str + k) = *(str + k) - 13;
}
return (str);
}
