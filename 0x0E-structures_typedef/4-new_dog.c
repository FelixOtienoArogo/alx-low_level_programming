#include "dog.h"
#include<stdlib.h>

/**
 *new_dog - this is a function that creates a new dog
 *
 *@name: name of the dog
 *@age: age of the new dog
 *@owner: the owner of the dog
 *
 *Return: the new structure made
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;
if (*name = NULL)
return (NULL);
new = malloc(sizeof(int) + sizeof(char *) + sizeof(char *));
if (new == NULL)
return (NULL);

new->name = name;
new->age = age;
new->owner = owner;
return (new);
}
