#include <stdio.h>
/**
 *main - main entry point
 *@argc: first member
 *@argv: second argument
 *
 *Return: nothing
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
