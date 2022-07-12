#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * puts_half - this function prints a half of a string
 * @str: a pointer
 *
 * Return: nothing.
 */
void puts_half(char *str)
{
int i, j, k;
j = strlen(str);
if (j % 2 != 0)
i = ((strlen(str) + 2) / 2);
if (j % 2 == 0)
i = ((strlen(str) + 1) / 2);
for (k = i; k < j; k++)
{
printf("%c", *(str + k));
}
printf("\n");
}

