#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
  *check_num - adds positive numbers
  *@str: string
  *Return: Always 0 (succes)
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
