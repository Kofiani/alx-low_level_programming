#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers
 * @separator: string pointer variable.
 * @n: number of variables passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num = 0;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (separator != NULL && i < n -1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
