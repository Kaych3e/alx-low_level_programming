#include <stdio.h>
#include <stdlib.h>

/**
  *main - function prints the minimum number of coins
  *to make change for an amount of money.
  *@argc: length of argv
  *@argv: number of argument
  *Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int x, y;

	x = atoi(argv[1]);
	y = 0;

	if ((argc <= 1) || (argc > 2))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (x > 0)
		{
			y += 1;
			if (x >= 25)
			{
				x -= 25;
				continue;
			}
			if (x >= 10)
			{
				x -= 10;
				continue;
			}
			if (x >= 5)
			{
				x -= 5;
				continue;
			}
			if (x >= 2)
			{
				x -= 2;
				continue;
			}
			x -= 1;
		}
		printf("%d\n", y);
	}
	return (0);
}
