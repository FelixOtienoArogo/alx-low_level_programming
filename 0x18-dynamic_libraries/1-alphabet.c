#include "main.h"

/**
 *print_alphabet - Entry point
 *
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char ch;
	char end = '\n';

	for (ch = 'a' ; ch <= 'z' ; ch++)
		{_putchar (ch); }
	_putchar(end);
}
