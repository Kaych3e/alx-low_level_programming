#include <unistd.h>

/**
  *_putchar - writes char c to stdout
  *@c: character to print
  *Return: On success 1, -1 on error
  */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
