#include "main.h"
/**
 * print_triangle - print triangle of given size
 * @size:Size of triangle
 *
 * Return:Nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;

		while (i < size)
		{
			j = size - 1;

			while (j > 1)
			{
				putchar(' ');
				j--;
			}
			j = 0;

			while (j < i + 1)
			{
				putchar('#');
				j++;
			}
			putchar('\n');
			i++;
		}
	}
	else
		putchar('\n');
}
