#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  char *s,*s1,*s2;

    s = str_concat("Hello", NULL);
    s1 = str_concat(NULL, "Hello");
    s2 = str_concat(NULL, NULL);
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    printf("%s\n", s1);
    printf("%s\n", s2);
    free(s);
    free(s1);
    free(s2);
    return (0);
}
