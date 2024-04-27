#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @str: a string.
 * Return: a pointer to a string.
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && str[i] >= 65 && str[i] <= 90 &&
			str[i] >= 97 && str[i] <= 122; i++)
	{
		str[i] += 13;
	}
	return (str);
}
