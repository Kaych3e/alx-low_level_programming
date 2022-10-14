#include <stdio.h>
/**
 * main - Prints base 16 numbers lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
