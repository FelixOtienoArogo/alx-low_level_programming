#include <math.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

long int n = 612852475143;
long int maxPrime = -1;
int i;
while (n % 2 == 0)
{
maxPrime = 2;
n >>= 1;
}

while (n % 3 == 0)
{
maxPrime = 3;
n = n / 3;
}
for (i = 5; i <= sqrt(n); i += 6)
{
while (n % i == 0)
{
maxPrime = i;
n = n / i;
}
while (n % (i + 2) == 0)
{
maxPrime = i + 2;
n = n / (i + 2);
}
}

if (n > 4)
maxPrime = n;
printf("%ld \n", maxPrime);
return (0);
}
