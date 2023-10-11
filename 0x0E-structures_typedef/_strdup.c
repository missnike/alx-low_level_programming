#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a char function to
 * duplicate character
 * @str: the pointer to the character
 * @str_dup: the string to duplicate
 * @len: the length of string
 * @i: the iteration
 *
 * Return: the character
 */
char *_strdup(char *str)
{

	char	*str_dup;
	int	len, i;

	if (!str)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
		str_dup = malloc(sizeof(char) * (len + 1));
		if (!str_dup)
			return (NULL);
	for (i = 0; i < len; i++)
	{
		str_dup[i] = str[i];
	}
	str_dup[i] = '\0';
	return (str_dup);
}
