#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as a param.
 * @array: the array.
 * @size: teh size of the array.
 * @action: the function pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
