#include "function_pointers.h"

/**
 * print_name - function pointer to print name.
 * @name: name variable
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
