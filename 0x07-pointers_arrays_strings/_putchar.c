#include "main.h"
/**
 * _putchar - a function that print out a character.
 *@c - the variable thaat prints out the character.
 * Return: if success 1, if not -1 errno 
 * is correctly set
 */
void _putchar(char c)
{
	return (write(1, &c, 1));
}
