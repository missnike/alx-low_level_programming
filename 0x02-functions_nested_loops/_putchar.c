#include <unistd.h>
/**
 *  main - _putchar is a custom function
 *  to writed a program instead of using printf
 *
 *  @c: A c function to print the characters
 *
 *  Return: Is to return the return assigned to it
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
