#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @n: number of bytes to be filled.
 * @s: address of memory to be filled.
 * @b: value to be filled
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
