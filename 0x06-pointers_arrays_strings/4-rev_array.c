#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers.
 * @n: number of elements.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = tmp;
	}
}
