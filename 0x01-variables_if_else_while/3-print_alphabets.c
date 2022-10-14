#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Print alphabet in lower and uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
