#include<stdio.h>

/**                                                                                                                                                                                                        
 * puts2 - this function prints a string                                                                                                                                                                   
 * @str: a pointer                                                                                                                                                                                         
 *                                                                                                                                                                                                         
 * Return: nothing.                                                                                                                                                                                        
 */
void puts2(char *str)
{
int i;
i = 0;
while (*str != '\0')
{
if (i % 2 == 0)
printf("%c", *(str));
str++;
i++;
}
printf("\n");
}

