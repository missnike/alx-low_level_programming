#include <stdio.h>
/**
 * main - main entry
 *
 * Return: Always return 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);
	putchar('\n');
	return (0);

}
