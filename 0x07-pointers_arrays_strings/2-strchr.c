#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - points to the first
 * character of another string in a string
 *
 * @s: the first string
 * @c: the character to search for in the first string
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	int i

	while (*s[i] != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	return (NULL);

}
