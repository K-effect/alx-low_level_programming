#include "main.h"
/**
 * _puts_recursion: prints a string, followed by a new line
 * @s: string to print
 *
 * Return: void
 * */
void _puts_recursion(char *s)
{
	if (*s)
        {
                _putchar(*s);
		s++;
		puts_recursion(s);
	}
	else
	{
		_putchar('\n');
                return;
        }
}
