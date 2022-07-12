/**
 * swap_int - this function swaps the values of two integers
 * @a: a pointer
 * @b: a pointer
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
