#include "main.h"
/**
  * binary_to_uint - converts a string of 1's and 0's to a decimal number
  * @b: string to convert
  *
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int temp = 0;
	unsigned int expo = 1;
	int len = 0;

	if (!b)
		return (0);

	while (b[len])
		len++;
	for (len = len - 1; b[len]; len--, expo *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		temp = (unsigned int) b[len] - '0';
		result += temp * expo;
	}
	return (result);
}
