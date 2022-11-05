#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
  *check_num - checks for digits in string
  *@str: string array
  *Return: Always 0 (success)
  */

int check_num(char *str)
{
	unsigned int count; /*Declare Variable*/

	count = 0;
	while (count < strlen(str)) /*counts string*/
	{
		if (!isdigit(str[count])) /*checks for digit in string*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
  *main - adds positive numbers
  *@argc: argument count
  *@argv: argument
  *Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI converts string to integer*/
			sum += str_to_int;
		}
		else /*condition if any num has symbols that arent digits*/
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
