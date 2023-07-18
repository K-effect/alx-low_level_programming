#include "main.h"
/**
  * _abs - Computes the absolute value of an integer.
  * @c: The number to be computed.
  *
  * Return: Absolute value of number or zero
  */
int _abs(int c)
{
  int abs_val;
  
	if (c < 0)
		return (c * -1);
	else
    return (c);
}
