#include "main.h"
/**
 * main - Entry point
 * Description:Function that prints the numbers, from 0 to 9,
 * followed by a new line
 * Return:Result
 */
void print_numbers(void)
{
	int num = 0;
	
	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
}
