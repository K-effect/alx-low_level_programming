#include "main.h"
#include <stdio.h>
/**
  * get_endianness - returns processor endianness
  * 
  * Return: int
  */
int get_endianness(void)
{
	int i = 1;
	char *test;
	
	test = (char *)&i;
	return ((int)test[0]);
}
