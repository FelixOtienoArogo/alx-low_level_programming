#include "dog.h"
#include<stdlib.h>
/**
 *init_dog - A function to initialise dog
 *
 *@d: the new dog
 *@name: its name
 *@age: the dog's age
 *@owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
