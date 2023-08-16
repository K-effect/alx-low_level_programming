#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name to print
 * @f: the function to send the name to
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{

	(*f)(name);
}
