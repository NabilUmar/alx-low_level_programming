#include "main.h"
/**
 * more_numbers - Functions that prints 10 times the numbers, from 0 to 14
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int num1, num2;

	num1 = 0;
	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 15)
		{
			if (num2 > 9)
				putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');
			num2++;
		}
		putchar('\n');
		num1++;
	}
}
