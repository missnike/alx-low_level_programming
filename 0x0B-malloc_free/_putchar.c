#include "main.h"
#include <stdio.h>
/**
 * _putchar - the function to print out a character
 *
 * @c: he character
 *
 * Return: Zero if successfull
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
