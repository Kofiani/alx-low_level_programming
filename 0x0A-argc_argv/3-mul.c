#include <stdio.h>
#include <stdlib.h>

/**
 * main - the beginning of the programme
 * @argc: returns the number of elements in the argv array
 * @argv: an array of commands entered in the CLI
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc > 1 && argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
