#includ "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @c: input string
 *
 * Return: char
 * */
char *cap_string(char *c)
{
	int i = 0;
	int j = 0;
	int ref = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (*(c + i) != '\0')
	{
		if (i == 0)
			*(c + i) = *(c + i) - 32;
		else
		{
			if (*(c + i) >= 'a' && *(c + i) <= 'z')
			{
				while (j <= 12)
				{
					if (a[j] == *(c + i - 1))
						*(c + i) = *(c + i) - 32;
					j++;
				}
			}
		}
		i++;
	}
	return (c);
}
