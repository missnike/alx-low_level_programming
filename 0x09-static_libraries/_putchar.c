#include "main.h"
#include <unistd.h>

/**
 * _putchar - the main function to print a character
 *
 * return: return the inputed character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
