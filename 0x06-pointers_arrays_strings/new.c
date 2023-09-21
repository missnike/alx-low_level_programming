#include <stdio.h>
#include "new.h"
/* main - a program to test functions
 *
 * Return: always return zero
 */
int main(void)
{
	int n;
	int *p;
	n = 30;
	p = &n;

	printf("the value of n is %d\n", n);
	printf("the value of p %p\n", (void *)p);
	printf("the address of n is %p\n", (void *)&n);
	printf("the address of p is %p\n", (void *)&p);
	my_pointer(p);

	printf("the value of p %p\n",(void *)p);
	printf("the value of n %d\n", n);
	printf("the address of p %p\n",(void *)&p);
	
	return (0);

}
