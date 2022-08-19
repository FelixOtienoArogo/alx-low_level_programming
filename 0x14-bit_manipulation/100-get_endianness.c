#include <stdio.h>
#include "main.h"

/**
 *get_endianness - checks the endianness
 *
 *Return: 0 if big endian or 1 if littel endian
 *
 */

int get_endianness(void)
{
int n = 1;
return (*((char *) &n) + '0');
}
