#include "main.h"
/**
 * _isupper - main entry
 * Description: Functiom that checks the upper 
 * case of a character.
 * @c: chacter that defines the upper case
 *
 * Return: 0-if its lower case 1 if not
 */
int _isupper(int c);
{
	if(c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
