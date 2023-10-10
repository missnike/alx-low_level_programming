#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * main - to print the charactes of dog
 *
 * Return: if success return 0
 */
int main(void)
{
	struct dog new_dog;

	new_dog.name = "Lucky";
	new_dog.age = 6.7;
	new_dog.owner = "Adedamola";
	
	printf("Owner %s name %s with the age %.1f\n",
			new_dog.owner, new_dog.name, new_dog.age);

	return (0);
}
