#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#include "variadic_functions.h"
/**
 *print_all - a fucntion that prints everythings
 *
 *@format : the format of the variable
 *
 *Return: nothing
 *
 */
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i, n;
char *c, *sep;
n = 0;
i = 0;
sep = ", ";
va_start(ap, format);
while (format && format[i])
i++;

while (format && format[n])
{
if (n == (i - 1))
{
sep = "";
}
switch (format[n])
{
case 'c':
printf("%c%s", va_arg(ap, int), sep);
break;
case 'i':
printf("%d%s", va_arg(ap, int), sep);
break;
case 'f':
printf("%f%s", va_arg(ap, double), sep);
break;
case 's':
c = va_arg(ap, char *);
if (c == NULL)
c = "(nil)";
printf("%s%s", c, sep);
break;
}
n++;

}
printf("\n");
va_end(ap);
}
