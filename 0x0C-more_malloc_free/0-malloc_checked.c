#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - to allocate memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: the pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);
	return (str);
}
