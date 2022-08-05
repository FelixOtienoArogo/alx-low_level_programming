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
char *c;
va_start(ap, n);
for (i = 0; i < (n); i++)
{
c = va_arg(ap, char *);
if (c == NULL)
{
c = "(nil)";
}
printf("%s", c);
if (separator != NULL && i != n - 1)
printf("%s", separator);
}

va_end(ap);
printf("\n");
}
