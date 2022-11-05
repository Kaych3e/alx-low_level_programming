#include <stdio.h>
#include "main.h"

/**
  *main - prints the number of arguments passed into it
  *should print a number, followed by a new line
  *@argc: number of arguments
  *@argv: arguments
  *Return: Always 0 on success
  */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv, take note of just argc*/
	printf("%i\n", argc - 1);
	return (0);
}
