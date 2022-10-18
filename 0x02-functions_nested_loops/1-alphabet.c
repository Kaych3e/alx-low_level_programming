#include "main.h"
/**
 * print_alphabet - Prints lowercase alphabet.
 * Return: 1 On Success
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
