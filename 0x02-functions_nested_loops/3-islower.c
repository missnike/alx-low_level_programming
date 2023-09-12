#include "main.h"
/**
 * _islower - entry point
 * Description: function that check for lower case
 *
 * @c:character to check if it in lowercase
 *
 * Return: 0-If it is lower case, 1-if it is not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
