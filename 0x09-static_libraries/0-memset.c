#include "main.h"
/**
 * _memset - the pointer to a pointer
 * that takes a specific number of bytes
 * and use it to store a character
 *
 * @s: the pointer
 * @b: the character
 * @n: the number of byte
 * Return: return s the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
