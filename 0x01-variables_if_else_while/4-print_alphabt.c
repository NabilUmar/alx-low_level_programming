#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: ALways 0 (success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i !=113)
		{
			putchar(1);
		}
	}
	putchar('\n');
	return (0);
}																												
