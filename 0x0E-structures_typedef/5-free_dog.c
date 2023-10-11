#include "dog.h"
/**
 * free_dog - a function to free a
 * memory space
 * @d: the pointer to free
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
