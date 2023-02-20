#include <stdio.h>
/**
 * main - Entry point
 * Description -Write alphabets in lower then upper case
 * Return: Always 0 (success)
 */

int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; 1 < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
return (0);
}	
