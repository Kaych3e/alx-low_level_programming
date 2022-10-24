#include "main.h"

/**
 * puts_half - prints half of a string followed by new line
 * @str: input string
 * Return - no return
 */

void puts_half(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	str -= (i / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
