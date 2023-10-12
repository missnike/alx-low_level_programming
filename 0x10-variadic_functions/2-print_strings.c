#include "variadic_functions.h"
/**
 * print_strings - this is a function that prints a string followed
 * by a new line
 *
 * @separator: the separator
 * @n: the number of arguement
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mention;
	unsigned int i;
	char *str;

	va_start(mention, n);
		for (i = 0; i < n - 1; i++)
		{
		str = va_arg(mention, char*);
		if (separator)
		if (!str)
		printf("(nil)%s", separator);
		else
		printf("%s%s", str, separator);
		else
		if (!str)
		printf("(nil)");
		else
		printf("%s", str);
		}
		printf("%s", va_arg(mention, char *));
		va_end(mention);
		printf("\n");
}
