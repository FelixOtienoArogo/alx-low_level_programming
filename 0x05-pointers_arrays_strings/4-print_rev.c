#include<stdio.h>
#include<string.h>
/**
* print_rev - this function prints a string in reverse
* @s: a pointer
*
* Return: nothing.
*/
void print_rev(char *s)
{
int i;

for (i = strlen(s); i >= 0; i--)
{
printf("%c", *(s + i));
}
printf("\n");
}

