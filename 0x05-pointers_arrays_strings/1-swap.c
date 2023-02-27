#include "holberton.h"
/**
 * swap_int - check the code for holberton school students
 *@a: declaration of a and parameters for the function swap_int
 *@b: declaration of b and parameters for the function swap_int
 * Return:Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
