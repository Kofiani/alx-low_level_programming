#include <stdio.h>

/**
 * main - the main function that operates the other functions.
 * @argc: counts the number of arguements in the CLI.
 * @argv: an array of strings entered in the CLI
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
