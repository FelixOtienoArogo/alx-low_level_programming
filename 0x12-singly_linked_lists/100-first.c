#include <stdio.h>

void _pr(void) __attribute__((constructor));
/**
 *_pr - prints before main is executed
 *
 */
void _pr(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
