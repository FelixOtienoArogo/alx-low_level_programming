#include<stdio.h>
/**
 * print_array - this function prints n elements of an array
 * @a: a pointer
 * @n: a member
 *
 * Return: nothing.
 */
int print_array(int *a, int n)
{
int counter;

counter = 0;
while (counter != n)
{
printf("%d", *(a + counter));
if (counter < n - 1)
printf(", ");
counter++;
}
printf("\n");
return (counter);
}
