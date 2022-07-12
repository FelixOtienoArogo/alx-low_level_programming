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
i = ((strlen(str) + 2) / 2);
j = strlen(str);
for (k = i; k < j; k++)
{
printf("%c", *(str + k));
}
printf("\n");
}

