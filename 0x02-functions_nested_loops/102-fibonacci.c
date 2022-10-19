#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int a;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (a = 0; f < 48; c++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		ni = n2;
		n2 = fn;
	}
	printf('\n');
	return (0);
}

