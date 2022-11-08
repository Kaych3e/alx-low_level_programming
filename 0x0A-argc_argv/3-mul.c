#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *main -  program that multiplies two numbers
  *@argc: number of arguments
  *@argv: arguments vector
  *Return: 0 if true, 1 if false
  */

int main(int argc, char *argv[])
{
	int a, b; /*Initialise*/

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
		printf("Error\n");
		return (1);
}