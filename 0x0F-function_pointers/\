#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: am array of ints.
 * @size: the size of the array.
 * @cmp: a pointer to a function.
 *
 * Return: an index to the first int that matches.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}
	return (-1);
}
