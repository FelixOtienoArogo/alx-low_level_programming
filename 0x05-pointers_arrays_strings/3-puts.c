#include<stdio.h>

/**
* _puts - this function prints a string
* @str: a pointer
*
* Return: nothing.
*/
void _puts(char *str)
{

while (*str != '\0')
{
printf("%c", *(str));
str++;
}
printf("\n");
}
