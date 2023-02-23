#include "main.h"
/**
 * print_diagonal - Draw a diagonal line '\'
 * @n:Number of \ to print
 *
 * Return:Nothing
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			j = 0;
			while (j < 1)
			{
				putchar(' ');
				j++;
			}
			putchar('\\');
			putchar('\n');
			i++;
		}
	}
	else
		putchar('\n');
}
