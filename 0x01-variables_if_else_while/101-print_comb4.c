#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there*/
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int i;
	int j;
	int you = 0;

	for (ch = 0 ; ch <= 8 ; ch++)
	{
		for (i = ch ; i <= 9 ; i++)
		{
			for (j = i; j <= 9 ; j++)
			{
				if (i != ch && i != j && j != ch)
				{
					putchar (ch + '0');
					putchar (i + '0');
					putchar (j + '0');
					if (you < 119)
					{
						putchar (',');
						putchar (' ');
						you++;
					}}}}}
	putchar ('\n');

	return (0);
}

