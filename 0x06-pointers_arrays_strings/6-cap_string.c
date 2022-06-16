#include "main.h"

/**
 * cap_string - function
 * @str: param
 * Return: value
 */

char *cap_string(char *str)
{
	int i, j;
	int spe[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 48, 49,
		     50, 51, 52, 53, 54, 55, 56, 57};

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 24; j++)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				if (str[i - 1] == spe[j])
				{
					str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
