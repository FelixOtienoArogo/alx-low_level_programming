#include<stdio.h>
#include<string.h>

/**
 * puts_half - this function prints a half of a string
 * @str: a pointer
 *
 * Return: nothing.
 */
void puts_half(char *str)
{
int i;
i = ((sizeof(str) + 2) / 2);
while (*str != '\0')
{
printf("%c", *(str + i));
str++;
}
printf("\n");
}

