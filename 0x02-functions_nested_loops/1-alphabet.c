/**
 *function to display the alphabet
 *
 */
#include "main.h"

void print_alphabet(void)
{
char ch;
	char end = '\n';

	for (ch = 'a' ; ch <= 'z' ; ch++)
		{_putchar (ch); }
	_putchar(end);
}
