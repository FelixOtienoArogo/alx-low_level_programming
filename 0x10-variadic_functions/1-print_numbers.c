#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
/**
 *print_numbers - a fucntion that prints numbers
 *
 *@n : a memeber
 *@separator: in between
 *
 *Return: nothing
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; i < (n); i++)
{
printf("%d", va_arg(ap, int));
if (separator != NULL)
printf("%s", separator);
}
va_end(ap);
printf("\n");
}
