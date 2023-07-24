#include "main.h"

/**
 * puts2 - prints every other character of a string, 
 * starting with the first character, followed by a new line
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int length = 0;

	while (s[length] != '\0')
		length++;
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
