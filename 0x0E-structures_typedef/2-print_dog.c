#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 *print_dog - to print the dog
 *
 *@d: the dog to be printed
 *
 */
void print_dog(struct dog *d)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
