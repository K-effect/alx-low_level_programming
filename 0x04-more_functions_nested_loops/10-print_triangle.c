#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: the size of the square
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
  
  if ( size > 0)
  {
    for ( j = 0; j < size; j++)
      {
        for ( i = 0; i < size - j; i++)
          _putchar(' ');
        for ( i = size - j; i < size ; i++)
          _putchar('#');
        _putchar('\n');
      }
  }
  else
    _putchar('\n');
}
