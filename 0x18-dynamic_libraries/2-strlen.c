/**
* _strlen - this function returns the length of a string
* @s: a pointer
*
* Return: nothing.
*/
int _strlen(char *s)
{
int counter;

counter = 0;
while (*s != '\0')
{
s++;
counter++;
}
return (counter);
}
