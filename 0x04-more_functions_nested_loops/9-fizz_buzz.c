#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 != 0))
printf("Fizz ");
if ((i % 5 == 0) && (i % 3 != 0))
printf("Buzz ");
if ((i % 5 == 0) && (i % 3 == 0))
printf("FizzBuzz ");
if ((i % 5 != 0) && (i % 3 != 0))
printf("%d ", i);
}
printf("\b");
printf("\n");
return (0);
}
