#include<stdarg.h>
/**
 *sum_them_all - a fucntion that return sthe sum of all its parameters
 *
 *@n : a memeber
 *
 *Return: the sum of the functions
 *
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int result;
result = 0;
if (n == 0)
return (0);
va_start(ap, n);
for (i = 0; i < (n); i++)
{
result = result + va_arg(ap, int);
}
va_end(ap);
return (result);
}
