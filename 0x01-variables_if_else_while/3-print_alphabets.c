#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char ch;
	char end = '\n';

	for (ch = 'a' ; ch <= 'z' ; ch++)
		{putchar (ch); }
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	  {putchar (ch); }
	putchar(end);
	return (0);
}

