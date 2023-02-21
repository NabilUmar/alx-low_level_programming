#include "main.h"
/**
 * main - Entry block
 * Description:Prints _putchar followed by a new line
 * Return:Always 0 (success)
 */
int main(void)
{
	char c[8] = "_putchar";
	int i = 0;
	while(i < 8)
	{
	putchar(c[i]);
	i++;
	}
_putchar('\n');
return (0);
}
