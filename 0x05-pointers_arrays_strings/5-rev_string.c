#include<stdio.h>
#include<string.h>
/**
* rev_string - this function reverses a string
* @s: a pointer
*
* Return: nothing.
*/
void rev_string(char *s)
{
int temp, i, j;
i = sizeof(s) + 1;
for (j = 0; j < i; j++)
{
temp = *(s + j);
*(s + j) = *(s + i);
*(s + i) = temp;
i--;
}
}
