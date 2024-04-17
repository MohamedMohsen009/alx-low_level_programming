#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of array.
 * @a: the array.
 * @n: the number of elements.
 * Return: void
 */
void print_array(int *a, int n)
{
	int length = 0;
	int index;

	while (a[length] != '\0')
	{
		length++;
	}
	if (n < length)
	{
		for (index = 0; index < n; index++)
		{
			printf("%d",a[index]);
			if (index != n - 1)
			{
				printf(", ");
			}
			else
			{
				printf(" ");
			}
		}
	}
}	
