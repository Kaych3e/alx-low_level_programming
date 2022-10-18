#include "main.h"
/**
 * print_alphabet_x10 -Prints lowercase alphabets 10 times.
 * Return: 1 On Success
 */
void print_alphabet_x10(void)
{
	char i, k;

	for (k = 0; k < 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
