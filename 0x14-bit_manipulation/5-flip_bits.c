#include "main.h"
#include <stdio.h>

/**
 * flip_bits - to flip bits to convert one number to another number
 * @n: the first number
 * @m: the second number to convert to
 * Return: to number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
