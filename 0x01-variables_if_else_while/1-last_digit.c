#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Determine if the last digit of a randomly generated
* number is zero, greater or lower than 5
*
* Return: 0 on success
* Description: prints the last digit of a randomly generated
* number and where the digit is equal to 0, greater or lower than 5
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and is ", n, n % 10);
	if (n % 10 > 5)
		printf("greater than 5\n");
	else if (n % 10 == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
