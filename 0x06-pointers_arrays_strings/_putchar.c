#include <stdio.h>
/**
 * _putchar: main point of entry 
 *           a function that works as printf
 *
 * Return: Always return zero
 */
void  _putchar(char c)
{
	return (write(1, &c, 1));
}
