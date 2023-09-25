#include "main.h"
/**
 * _memcpy - a function to copies n bytes
 * from memmory area src to memory area dest
 *
 * @src: the pointer that has the initial byte
 * @dest: the pointer that copies the number of
 * byte from src
 * @n: the number of byte
 *
 * Return: will return _memcpy to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = (char *)dest;
	char *m = (char *)src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	p[i] = m[i];
	}
	return (dest);
}
