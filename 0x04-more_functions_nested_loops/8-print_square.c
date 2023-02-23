#include "main.h"
/**
 * print_square - print a nxn square of #
 * @size:Size of square sides
 *
 * Return:Nothing
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				putchar('\n');
				j++;
			}
			putchar('\n');
			i++;
		}
	}
	else
		putchar('\n');
}
