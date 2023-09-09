#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  main - the main entry
 *  Discription: checks on the last digit of the assigned var
 *  Return: alway return 0 (success)
 */
int main(void)
{

	int n, r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	if (r > 5)
	{
		printf("Last digit of %d and is %d greater than 5\n", n, r);
	}
	else if (r < 6 && r != 0)
	{
		printf("Last digit of %d and is %d less than 6 and not 0\n", n, r);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, r);
	}
	return (0);

}
