#include "main.h"

/**
 * strchr - locates a character in a string.
 * @s: a string.
 * @c: a char.
 * Return : a pointer to c or NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
