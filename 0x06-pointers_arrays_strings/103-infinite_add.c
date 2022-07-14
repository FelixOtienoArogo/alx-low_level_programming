#include "main.h"
#include <string.h>
/**
 *infinite_add - Function to add 
 *@n1: First member
 *@n2: Second member
 *@r: another
 *@size_r: last
 *
 *Return: Always pointer (Success)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m;
i = size_r;
l = strlen(n2);
k = strlen(n1);

for(j = k - 1; j >= 0; j--)
{
m = l - 1;
if(m >= 0)
*(r + i + j -1) = (*(n1 + j) + *(n2 + m));
if(*(r + i + j -1 ) > '9' && j < i)
{
*(r + i + j - 1) = *(r + i + j - 1) - '9' - 1;
*(r + i + j - 2) = *(r + i + j - 2) + '1';
}
else
return (0);
m--;
}
return (r);
}
