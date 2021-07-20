#include <stdio.h>
#include "dog.h"

/**
 *init_dog - initializing variable of type struct dog
 *@d: pointer to element of type dog
 *@name: member
 *@age: member
 *@owner: member
 *Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
