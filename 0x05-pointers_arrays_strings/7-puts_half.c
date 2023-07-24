#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int length = 0;

	while (str[length] != '\0')
		length++;
  if (length % 2 == 0)
  {
    for (i = length/2; i < length; i ++)
  	{
  		_putchar(str[i]);
  	}
  	_putchar('\n');
  }
  else
  {
    for (i = (length-2)/2; i < length; i ++)
  	{
  		_putchar(str[i]);
  	}
  	_putchar('\n');
  }
}
