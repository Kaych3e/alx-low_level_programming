#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @n: number of bytes to copy
 * @src: memory area to copy
 * @dest: destination
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
