#include <stdlib.h>
#include "dog.h"

/**
 * type struct dog - variable 
 * @name: variable name
 * @age: variable age
 * @owner:variable owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
if (d == NULL)
	d = malloc (size of(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
