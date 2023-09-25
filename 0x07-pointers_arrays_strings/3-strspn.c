#include "main.h"
#include <stddef.h>
/**
 * _strspn - a function that returns the number of byte
 * of another function
 *
 * @s: the initial pointer
 * @accept: the new pointer that its string will
 * be printed
 *
 * Return: the size of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t;

	t = 0;

	while (*s != '\0')
	{
	char c = *s;
	char *p = accept;
	int size = 0;

	while (*p != '\0')
	{
	if (c == *p)
	{
	size = 1;
	break;

	}
	p++;

	}
	if (!size)
	{
	break;

	}
	t++;
	s++;

	}
	return (t);
}
