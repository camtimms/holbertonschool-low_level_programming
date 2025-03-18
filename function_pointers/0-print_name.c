#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - A function that prints a name
 *
 * @name: String that contains the name
 * @f: Function pointer to change how to print the name
 *
 * Description: print_name takes a name as an input and depending on how the
 * name should be printed either normally or uppercase and function pointer is
 * passed as well. This funciton checks if either of the arguments is missing
 * and then runs the name through the function pointer function.
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
