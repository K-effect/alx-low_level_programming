#include "main.h"

/**
 * swap_int - swap two integers
 * @a: pointer to variable 1 to swap
 * @b: pointer to variable 2 to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
  int c;

  c = *a;
  *a = *b;
  *b = c;
}
