#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source
 * @n: amount of bytes from src.
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int output;

	for (output = 0; output < n && src[output] != '\0'; output++)
	{
		dest[output] = src[output];
	}
	while (output < n)
	{
		dest[output] = '\0';
		output++;
	}
	return (dest);
}
