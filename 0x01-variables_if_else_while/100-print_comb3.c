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
	int i;
	int you = 0;

	for (ch = 0 ; ch <= 8 ; ch++)
	{
		for (i = ch ; i <= 9 ; i++)
		{
			if (i != ch && i != 0)
			{
				putchar (ch + '0');
				putchar (i + '0');
				if (you < 44)
				{
					putchar (',');
					putchar (' ');
					you++;
				}}}}
	putchar ('\n');

	return (0);
}

