#include <stdio.h>
/**
 * main - the main point of entry
 *
 * Return: Always return zero
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}

	putchar('\n');
	return (0);

}
