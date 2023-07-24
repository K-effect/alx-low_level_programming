#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by
 * a new line, to stdout
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
  int i;
  
	i = _strlen(*s);
  
	while (i != 0)
	{
		_putchar(str[i]);
		i--;
	}
  _putchar('\n');
}
