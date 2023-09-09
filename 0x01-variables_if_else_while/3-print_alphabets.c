#include <stdio.h>
/**
 * main - the main entry
 *
 * Return: Always return zero
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
	putchar(letter);
	putchar('\n);
	return (0);

}
