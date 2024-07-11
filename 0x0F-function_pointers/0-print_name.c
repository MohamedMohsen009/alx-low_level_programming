#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: a string to be printed.
 * @f: a function to print a name.
 *
 * Return: always void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
