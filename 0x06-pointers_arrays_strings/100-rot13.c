#include "main.h"

/**
 * rot13 - function
 * @rot: parameter
 * Return: char
 */

char *rot13(char *rot)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int c = 0, i;

	while (rot[c] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (rot[c] == alph[i])
			{
				rot[c] = rot13[i];
				break;
			}
		}
		c++;
	}
	return (rot);
}
