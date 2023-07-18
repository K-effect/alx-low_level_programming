#include "main.h"

/**
  * print_last_digit - Print the last digit of a number
  * @n: The number to be treated
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = (n % 10)*-1;
	else
		last = n % 10;
	_putchar(last + '0');
	return (last);
}
