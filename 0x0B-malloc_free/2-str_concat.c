#include <stdio.h>
#include <stdlib.h>

/**
  *_strlen - counts length of string
  *@s: string
  *Return: length of string
  */

int _strlen(char *s)
{
	int counter = 0;

	if (!*s)
		return (0);
	while (*s)
	{
		counter++;
		s++;
	}
	return (counter);
}

/**
  *str_concat - concatenates two strings
  *@s1: first string
  *@s2: second string
  *Return: pointer to memory space if success, NULL if failure
  */

char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int i, j;

	 int total = 0;

		if (!s1)
			s1 = "";
		if (!s2)
			s2 = "";
	  total += _strlen(s1) + _strlen(s2);
	  new = malloc((total * sizeof(char)) + 1);

		if (new == NULL)
			return (NULL);
		for (i = 0; s1[i]; i++)
		{
		new[i] = s1[i];
		}
		for (j = 0; s2[j]; j++, i++)
		{
		new[i] = s2[j];
		}
	new[i] = '\0';
	return (new);
}
