#include "dog.h"
/**
 * init_dog - to initialize the variables of struct dog
 *
 * @*struct dog: the properties of dog
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the ownner of dog
 * @d: a pointer to the structure of dog
 * Return: does not return anything
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
