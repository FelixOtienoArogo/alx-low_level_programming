#include "main.h"

/**
 *_isalpha - Entry point
 *@c: First member
 *
 *Return: Always 0 (Success)
 */

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
else
return (0); }
