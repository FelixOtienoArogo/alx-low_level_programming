#include "main.h"

/**
 *_isupper - Entry point
 *@c: First member
 *
 *Return: Always 0 (Success)
 */

int _isupper(int c)
{
if (c <= 'Z' && c >= 'A')
return (1);
else
return (0);
}
