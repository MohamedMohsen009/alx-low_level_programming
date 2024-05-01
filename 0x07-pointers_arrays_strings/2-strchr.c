#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: a string.
 * @c: a char.
 * Return : a pointer to c or NULL.
 */
char *_strchr(char *s, char c)
{
	int index;

	index = 0;
	while (s[index] >= '\0')
	{
		if (s[index] == c)
			return (s + index);
		index++;
	}
	return ('\0');
}
