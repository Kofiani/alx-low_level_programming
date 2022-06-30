#include "main.h"

/**
 * strl - count length of string
 * @s: string
 * Return: returns int value
 */

int strl(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);

	while (*s)
	{
		i++;
		s++;
	}

	return (i);
}

/**
 * string_nconcat - function to allocate memory
 * to a concatenated string.
 * @s1: the first string
 * @s2: the second string
 * @n: the size of string
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int len = strl(s2), j;
	int i;

	if (s1 == NULL)
		s1 = "";

	if (n >= len)
		n = len;

	mem = malloc(sizeof(*mem) * (strl(s1) + n) + 1);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < strl(s1); i++)
		mem[i] = *(s1 + i);

	for (j = 0; j < n; j++)
		mem[i + j] = *(s2 + j);

	mem[i + j] = '\0';

	return (mem);
}
