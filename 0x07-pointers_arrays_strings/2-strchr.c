#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 * @c: character in string
 * @s: string
 * Return: pointer to the first occurrence of the character c
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
