#include <stdio.h>
/**
 * main - lists all the natural numbers below 1024
 * excluding those that are the multiples of 3 or 5
 * Return: Always return o
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
	if ((i % 3) == 0 || (i % 5) == 0)
	sum += 1;
	}
	printf("%d\n", sum);
	return (0);
}
