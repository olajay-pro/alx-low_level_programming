#include <stdio.h>
#include "dog.h"

/**
 *print_dog - prints all member info
 *@d: a variable
 *Return:: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	(d->name == NULL) ? printf("Name: (nil)\n")
		: printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	(d->owner == NULL) ? printf("Owner: (nill)\n")
		: printf("Owner: %s\n", d->owner);

}
