#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 * @n: number to be checked for.
 * Return: 1 if n greater than zero, 0 if n is zero, -1 if n less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
			if (n < 0)
			{
				_putchar('-');
				return (-1);
			}
}
