#include <stdio.h>
#include <stdlib.h>

/**
 * cents - returns the lowest amount of change needed
 * @cash: cash deposited
 */

void cents(int cash)
{
	int arr[5] = {25, 10, 5, 2, 1};
	int rem, count = 0, i = 0, j;

	while (i < 5)
	{
		j = i;
		while (j < 5)
		{
			if (cash < arr[j])
			{
				j++;
			}
			else if (cash >= arr[j])
			{
				break;
			}
		}
		if (cash % arr[j] == 0)
		{
			count += cash / arr[j];
			break;
		}
		else
		{
			count += cash / arr[j];
			rem = cash % arr[j];
			cash = rem;
		}
	}
	printf("%d\n", count);
	i++;
}

/**
 * main - the main body of the function
 * @argc: keeps count of the elements in argv
 * @argv: array of elements from command line
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) == -1)
	{
		printf("0\n");
	}
	else
	{
		cents(atoi(argv[1]));
	}
	return (0);
}
