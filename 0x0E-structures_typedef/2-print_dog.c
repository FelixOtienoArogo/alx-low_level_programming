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
if (d)
{
if (d->name)
printf("Name: %s\n", d->name);
else if (!d->name)
printf("Name: nil\n");

if (d->age)
printf("Age: %f\n", d->age);
else if (!d->age)
printf("Age: nil\n");

if (d->owner)
printf("Owner: %s\n", d->owner);
else if (!d->owner)
printf("Owner: nil\n");
}
}
