#include <stdio.h>

/**
 * main - the part of that runs the function of the program
 * @argc: this tracks the number of elements typed in the CLI
 * @argv: this is an array of commands entered in the CLI
 * Return: always 0
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	int i = 0;

	while (i < argc - 1)
	{
		i++;
	}

	printf("%d\n", i);

	return (0);
}
