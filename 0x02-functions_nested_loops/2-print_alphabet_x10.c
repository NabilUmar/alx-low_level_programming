#include "main.h"
/**
 * main - Entry point
 *
 * Return:ALways 0 (success)
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	for (; i < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		_putchar ('\n');
	}
}
