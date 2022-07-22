#include<stdio.h>
#include<string.h>
#include<stdint.h>

/**
 * _atoi - this function converts a string  to an integer
 * @s: a pointer
 *
 * Return: nothing.
 */
int _atoi(char *s)
{
int64_t i, j, temp, sign;
char c;
sign = 1;
j = strlen(s) + 1;
temp = 0;
for (i = 0; i < j; i++)
{
c = *(s + 1 + i);
if (*(s + i) == '-')
sign = sign * (-1);
if (*(s + i) == '+')
sign = sign * 1;
if (*(s + i) == '0')
temp = temp + 0;
if (*(s + i) == '1')
temp = temp + 1;
if (*(s + i) == '2')
temp = temp + 2;
if (*(s + i) == '3')
temp = temp + 3;
if (*(s + i) == '4')
temp = temp + 4;
if (*(s + i) == '5')
temp = temp + 5;
if (*(s + i) == '6')
temp = temp + 6;
if (*(s + i) == '7')
temp = temp + 7;
if (*(s + i) == '8')
temp = temp + 8;
if (*(s + i) == '9')
temp = temp + 9;
if ((c >= '0') && (c <= '9') && (i < j - 1))
temp = temp * 10;
if (temp != 0 && c == ' ')
break;
}
temp = temp *sign;
return (temp);
}
