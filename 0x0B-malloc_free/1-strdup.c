#include <stdio.h>
#include <stdlib.h>


/**
  *_strdup - returns a pointer to a newly allocated space in memory,
  *which contains a copy of the string given as a parameter.
  *@str: string to be copied
  *Return: NULL if str = NULL, else
  *pointer to duplicated string
  */

char *_strdup(char *str)
{
	unsigned int i;

	int count = 0;
	char *dest;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		count++;
	}
	count += 1;
		dest = malloc(count * sizeof(char));
	if (dest == NULL)
	return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = str[i];
	return (dest);
}
