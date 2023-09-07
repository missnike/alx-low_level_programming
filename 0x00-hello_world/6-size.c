#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always return 0 (success)
 *
 */
int main(void)
{
	int i;
	float f;
	char c;
	long int g;
	long long int e;

	printf("Size of a char: %lu(s).\n", (unsigned long)sizeof(c));
	printf("Size of an int:%lu(s).\n", (unsigned long)sizeof(i));
	printf("Size of a long int:%lu(s).\n", (unsigned long)sizeof(g));
	printf("Size of a long long int:%lu(s).\n", (unsigned long)sizeof(e));
	printf("Size of a float:%lu(s).\n", (unsigned long)sizeof(f));

	return (0);

}
