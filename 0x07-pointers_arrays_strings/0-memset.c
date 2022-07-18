/**
 * _memset - this function fills memory with a constant byte
 * @s: destination pointer
 * @b: constant byte
,* @n: first bytes filled
 *
 * Return: nothing.
 */
char *_memset(char *s, char b, int n)
{
int i;
for (i = 0; i < n ; i++)
{
*(s + i) = b;
}

return (s);
}
