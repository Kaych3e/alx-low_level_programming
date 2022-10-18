#include "main.h"
/**
 * _abs - Computes absolute value of an integer.
 * @i: integer value to be computed.
 * Return: absolute value.
 */

int _abs(int i)
{
	int k = i;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}
