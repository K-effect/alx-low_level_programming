#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: counter of arguments
 * @av: vector of arguments
 *
 * Return: pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	char *ar;
	int i = 0;
	int j = 0;
	int k = 0;
	int counter = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			counter++;
			j++;
		}
		counter++;
		i++;
	}
	counter++; /* to account for \n that needs to be added later */
	ar = malloc(sizeof(char) * counter);
	if (ar == NULL)
		return (NULL);
    i = 0;
    j = 0;
	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			ar[k] = av[i][j];
			k++;
			j++;
		}
		ar[k] = '\n';
		k++;
		i++;
	}
	ar[k] = '\0';
	return (ar);
}
