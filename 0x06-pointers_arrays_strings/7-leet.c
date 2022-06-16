#include "main.h"

/**
 * leet - function
 * @str: param
 * Return: pointer
 */

char *leet(char *str)
{
	char low_c[] = {97, 101, 111, 116, 108};
	char upp_c[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};
	int c = 0, i;

	while (str[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (str[c] == low_c[i] ||
			    str[c] == upp_c[i])
			{
				str[c] = num[i];


			}
		}
		c++;
	}
	return (str);
}
