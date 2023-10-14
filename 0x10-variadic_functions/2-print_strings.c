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
		for (i = 0; i < n; i++)
		{
		str = va_arg(mention, char*);
		if (!str)
		str = "(nil)";
		if (!separator)
		printf("%s", str);
		else if (separator && i == 0)
		printf("%s", str);
		else
		printf("%s%s", separator, str);
		}
		va_end(mention);
		printf("\n");
}
