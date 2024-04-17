#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints the second half of the string.
 * @str: the string.
 * Return: void.
 */
void puts_half(char *str)
{
	int length = 0;
	int n;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		n = length / 2;

		while (length > n)
		{
			putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (length - 1) / 2;
		n = length - n;

		while (length > n)
		{
			putchar(str[n]);
			n++;
		}
	}
	putchar('\n');
}
