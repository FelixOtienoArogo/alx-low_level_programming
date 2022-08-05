#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
/**
 *print_strings - a fucntion that prints strings
 *
 *@n : a memeber
 *@separator: in between
 *
 *Return: nothing
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; i < (n); i++)
{
printf("%s", va_arg(ap, char *));
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
va_end(ap);
printf("\n");
}
