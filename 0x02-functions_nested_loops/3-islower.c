#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character.
 * @c: character to be checked if lowercase.
 * Return:1 if c is lowercase, 0 - if not.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
