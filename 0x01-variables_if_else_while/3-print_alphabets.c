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
	char alp[52] =
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[52]);
	}
	putchar('\n');
	return (0);
}
