#include "dog.h"
/**
 * print_dog - to print null if d is empty
 * @d: the pointer to struct dog
 *
 * Return: it will be empty
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", d->age);
		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
