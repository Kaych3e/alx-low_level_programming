#include "main.h"

/**
  *sqrt2 - evaluate square root from n to 1
  *@a: given number n
  *@b: iterator
  *Return: On success 1, -1 if error
  */

int sqrt2(int a, int b)
{
	if (b * b == a)
	return (b);
	else
	if (b * b > a)
	return (-1);
	return (sqrt2(a, b + 1));
}
/**
  *_sqrt_recursion - returns the natural square root of a number
  *@n: given number
  *Return: natural square root, if not, -1
  */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
