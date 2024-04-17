#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other char of a string.
 * @str: the string.
 * Return: void
 */
void puts2(char *str)
{
	int index = 0;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	while (index < length)
	{
		putchar(str[index]);
		index += 2;
	}
}
