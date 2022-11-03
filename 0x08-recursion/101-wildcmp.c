#include "main.h"

/**
  *wildcmp - compares two strings.
  *@s1: string 1
  *@s2: string 2, can contain the special character *
  *Return: 1 if the strings can be considered identical, otherwise return 0
  */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '*' && *(s1 + 1) != '\0'
			&& *s2 == '\0')
		return (0);
	if (*s1 == '?' || *s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '*')
		return (wildcmp(s1 + 1, s2)
			|| wildcmp(s1, s2 + 1));
	return (0);
}
