#include <stdio.h>
/**
 * main - the main point of entry
 *
 * Return: Always return zero
 */
int main(void)
{
	int num;
	for (num = 0; num <=9; num++)
	{
		putchar((num % 10) + '0')
	}

	putchar('\n');
	return (0);

}
