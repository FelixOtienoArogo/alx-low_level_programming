#include "main.h"

/**
 *_abs - Entry point
 *@c: First member
 *
 *Return: Always 0 (Success)
*/

int _abs(int c)
{
if (c < 0)
c = 0 - c;
return (c);
}
