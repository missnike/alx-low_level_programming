#include <stdio.h>
/**
 * main - the main entry
 *
 * Return: Always return 0
 */
int main(void)
{
	int	num1, num2, num3;

		for (num1 = '0'; num1 < '7'; num1++)
		{
			for (num2 = num1 + 1; num2 <= '8'; num2++)
			{
				for (num3 = num2 + 2; num3 <= '9'; num3++)
				{
					if (num2 != num1 && num3 != num2 && num3 != num1)
					{
						putchar(num1);
						putchar(num2);
						putchar(num3);

					if (num1 == 7 && num2 == 8 && num3 == 9)
						continue;

				putchar(',');
				putchar(' ');
					}
				}
			}
		}

	putchar('\n');
	return (0);
}
