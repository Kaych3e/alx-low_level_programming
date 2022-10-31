#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: string we compare
 * Return: pointer to the byte in s, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s; c != 0; s++)
	{
		for (p = accept; *p != 0; p++)
			if (c == *p)
			{
				return (s);
			}
	}
	return (0);
}
