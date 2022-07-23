#include <stdio.h>
#include <stdlib.h>
/**
 *main - main entry point
 *@argc: first member
 *@argv: second argument
 *
 *Return: nothing
 */

int main(int argc, char *argv[])
{
int result, mon;
if (argc != 2)
{
printf("Error\n");
return (1);
}
mon = atoi(argv[1]);
if (mon < 0)
{
result = 0;
}
if (mon == 25 || mon == 10 || mon == 5 || mon == 2 || mon == 1)
result = 1;
if (mon >= 25)
result = (mon / 25) + (mon % 25);
if (mon < 25 && mon >= 10)
result = (mon % 10);
if (mon < 10 && mon >= 5)
result = (mon / 5) + (mon % 5);
if (mon < 5 && mon >= 2)
result = (mon / 2) + (mon % 2);
printf("%d\n", result);
return (0);
}
