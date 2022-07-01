#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* headers */

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
	char end = '\n';

	for (ch = 'z' ; ch >= 'a' ; ch--)
		{putchar (ch); }
	putchar(end);

	return (0);
}
