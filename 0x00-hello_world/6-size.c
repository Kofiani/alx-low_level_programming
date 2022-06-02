#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	float f;
	char c;
	int i;

	printf("Size of a char: %li byte(s)\n", sizeof(c));
	printf("Size of an int: %li byte(s)\n", sizeof(i));
	printf("Size of a long int: %li byte(s)\n", sizeof(i));
	printf("Size of a long long: %li byte(s)\n", sizeof(i));
	printf("Size of a float: %li byte(s)\n", sizeof(f));
	return (0);
}

