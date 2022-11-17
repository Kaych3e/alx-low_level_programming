#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all - returns the sum of all its parameters.
  *@n: number of arguments
  *Return: sum of its parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	/*enables access to variadic function arguments*/
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);
	/*va_list* will be the pointer to the last fixed argument*/

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	/*accesses the next variadic function argument*/

	va_end(valist);
	/*ends the traversal of the variadic function arguments.*/

	return (sum);
}
