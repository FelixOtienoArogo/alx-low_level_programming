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
else
{
result = mon / 25;
mon = mon % 25;

result = result + (mon / 10);
mon = mon % 10;

result = result + (mon / 5);
mon = mon % 5;

result = result + (mon / 2);
mon = mon % 2;

result = result + mon;
}
printf("%d\n", result);
return (0);
}
