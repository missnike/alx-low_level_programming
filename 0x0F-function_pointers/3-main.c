#include "3-calc.h"
/**
 * main - Prints the results of simple operations
 * @argc: the number of arguements
 * @argv: the pointer to the arguement
 * Return: Always return 0
*/
int main(int argc, char *argv[])
{
	int i, num1, num2;
	char *op;

	if (argc != 4)
	{
		exit(98);
	}
	i = 0;

	num1 = atoi(argv[i]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[i] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) ||
		(*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
