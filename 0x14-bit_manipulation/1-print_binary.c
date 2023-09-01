#include "main.h"
/**
  * print_binary - converts a decimal number to binary
  * @n: integer to convert
  *
  * Return: void
  */
void print_binary(unsigned long int n)
{
	int temp;
	int flag = 0;

	if (n == 0)
		_putchar('0');
		
	temp = sizeof(n) * 8 - 1;
	while (temp >= 0)
	{
		if ((n >> temp) & 1)
		flag = 1;
		if (flag == 1)
			((n >> temp) & 1) ? _putchar('1') : _putchar('0');
		temp--;
	}
}
