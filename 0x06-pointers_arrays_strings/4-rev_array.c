#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers.
 * @n: number of elements.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int l;
	int i;
	int tmp;

	l = sizeof(*a) / sizeof(int);
	for (i = 0; i < n && i < l; i++)
	{
		tmp = a[i];
		a[i] = a[n - (i + 1)];

		a[n - (i + 1)] = tmp;
	}
}
