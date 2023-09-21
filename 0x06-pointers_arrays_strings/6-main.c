#include "modify_my_char_var.c"
/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("the value of p is %p\n", p);
	printf("the address of p is %p\n", &p);
	printf("the value of c is %c \n", c);
	printf("the address of c %p\n", &c);

	modify_my_char_var(p, c);
	printf("the value of p is %p\n", p);
	printf("the address of p is %p\n", &p);
	printf("the value of c is %c \n", c);
	printf("the address of c %p\n", &c);
	return (0);
}
