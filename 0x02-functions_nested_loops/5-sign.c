#include "main.h"
/**
 * print_sign - to put signs in nunber
 *
 * @n: the number
 *
 * Return: Return 1 for all
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
