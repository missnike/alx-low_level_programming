#include <stdio.h>
/**
 * main - the main point of entry
 *
 * while(1): to continue the program when it is still true
 *
 * switch: A state to check between comprison and detect
 * which is true to continue with the loop
 *
 * Return: Always return zero (0).
 */
int main(void)
{
	int choice;
	double num1, num2;

	printf("This is your calculator\n");
	printf("Get started\n");

	while (1)
	{
		printf("Menu\n");
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Quit\n");
		printf("Enter your choice\n");
		scanf("%d", &choice);

		if (choice == 5)

		{
			printf("Calculator is closing\n");
			break;
		}

		printf("Enter your two numbers: \n");
		scanf("%lf %lf", &num1, &num2);

		switch (choice)

		{
			case 1:
				printf("Result:%.2lf + %.2lf = %.2lf\n",
						num1, num2, num1 + num2);
				break;
			case 2:
				printf("Result:%.2lf - %.2lf = %.2lf\n",
						num1, num2, num1 - num2);
				break;
			case 3:
				printf("Result:%.2lf * %.2lf = %.2lf\n",
						num1, num2, num1 * num2);
				break;
			case 4:
				if (num2 != 0)
				{
					printf("Result:%.2lf / %.2lf = %.2lf\n",
							num1, num2, num1 / num2);
				}
				else
				{
					printf("Enter a correct divisor\n");
				}
				break;
			default:
				printf("invalid input try again\n");
		}
	}
	return (0);
}
