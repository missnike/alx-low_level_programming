#include "variadic_functions.h"
/**
 * print_numbers - a function that prints the number of lines
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
for (i = 0;  i < n - 1; i++)
{
	if (!separator)
		printf("%d", va_arg(list, int));
	else if (separator && i == 0)
		printf("%d", va_arg(list, int));
	else
		printf("%s%d", separator, va_arg(list, int));
}
va_end(list);
printf("\n");
}
