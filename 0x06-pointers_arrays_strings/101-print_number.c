#include "main.h"
/**
 * print_number - print an int number
 * @n: number 
 * Return: void
 */
void print_number(int n)
{
	int i =1;
int j;
int digit = 0;
int power = 1;
	unsigned int temp, numchar, number;

	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
		temp = n;
	number = temp;
	while (number >= 10)
	{
		number = number / 10;
		digit++;
	}
	digit++;
	while (i < digit)
	{
		power = power * 10;
		i++;
	}
	j = power;
	while (j >= 1)
	{
		numchar = (temp / j) % 10;
		_putchar(numchar + '0');
		j = j / 10;
	}
}

