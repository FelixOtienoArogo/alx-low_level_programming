
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
	int ch;
	char end = '\n';

	for (ch = 0 ; ch <= 0xf ; ch++)
		if (ch <= 9)
			{putchar (ch + '0'); }
	else
		putchar ((ch % 10) + 'a');
	putchar(end);

	return (0);
}

