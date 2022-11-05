#include <stdio.h>
#include "main.h"

/**
  *main - prints all arguments it receives
  *print one argument per line, ending with a new line
  *@argc: number of arguments
  *@argv: arguments
  *Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int count = 0; /*Declare my variables*/

		if (argc > 0)
		{
			while (count < argc) /*Prints each argument*/
			{
				printf("%s\n", argv[count]);
				count++; /*updation for WHILE statement*/
			}
		}
		return (0);
}
