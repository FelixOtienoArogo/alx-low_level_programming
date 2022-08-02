#include "dog.h"
#include<stdlib.h>
/**
 *free_dog - a function that frees dogs
 *
 *@d: is the dog to be freed
 *
 */
void free_dog(dog_t *d)
{
free(d);
}
