#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * print_diagsums - this function prints the sum of the two diagonals
 * @a: the matrix
 * @size: the size
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
int i, k, sum1, sum2;
k = size * size;
sum1 = 0;
sum2 = 0;

for (i = 0; i < k; i = i + size + 1)
{
sum1 = sum1 + a[i];
}
for (i = size - 1; i < k - 2; i = i + size - 1)
{
sum2 = sum2 + a[i];
}
printf("%d", sum1);
printf(", %d\n", sum2);
}
