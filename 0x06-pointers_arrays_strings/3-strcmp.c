#include "main.h"

/**_strcmp - comparison function
 * @s1: string 1
 * @s2: string 2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j =0;

	while (s1[i] !='\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i < j)
	{
		return (-15);
	}
	else if (i > j)
	{
		return (15);
	}
	return (0);

}
