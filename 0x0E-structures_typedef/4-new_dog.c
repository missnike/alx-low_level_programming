#include "dog.h"
#include "_strdup.c"
/**
 * new_dog - the new pointer to
 * properties of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of dog
 * Return: NULL if functions fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = _strdup(name);
	dog->age = age;
	dog->owner = _strdup(owner);

	if (!(dog->name))
	{
		free(dog);
		return (NULL);
	}
	if (!(dog->owner))
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}
