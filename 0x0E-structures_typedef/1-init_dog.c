#include "dog.h"
#include <stdlib.h>

/**
  *init_dog - initialize a variable of type struct dog
  *@d: dog to be initialised
  *@name: dog name
  *@age: dog age
  *@owner: owner of the dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
