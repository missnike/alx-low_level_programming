#include "main.h"
#include <stddef.h>
/**
 * _strchr - the function that points to the first
 * character of another string in a string
 *
 * @s: the first string
 * @c: the character to search for in the first string
 * Return: NULL if not found or th character if found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return ((char *) s);
	}
	s++;
	}
	return (NULL);
}

