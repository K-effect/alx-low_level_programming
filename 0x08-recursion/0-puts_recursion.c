#include "main.h"
/**
 * _puts_recursion: prints a string, followed by a new line
 * @s: string to print
 *
 * Return: void
 * */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	if (s)
	{
		_putchar('\n');
		return;
	}
}
