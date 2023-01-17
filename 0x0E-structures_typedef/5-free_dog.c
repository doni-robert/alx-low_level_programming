#include "dog.h"

/**
 * free_dog - frees created dog
 *
 * @d: dog to be freed
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

