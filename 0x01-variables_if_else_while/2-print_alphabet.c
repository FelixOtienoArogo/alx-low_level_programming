#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
	char end = '\n';

	for (ch = 'a' ; ch <= 'z' ; ch++)
		{putchar (ch); }
	putchar(end);

	return (0);
}
