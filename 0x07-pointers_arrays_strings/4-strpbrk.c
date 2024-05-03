#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: a string.
 * @accept: a string.
 * Return: a pointer or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	char *tmp;

	while (*s != '\0')
	{
		tmp = accept;
		while (*tmp != '\0')
		{
			if (*tmp == *s)
			{
				return (s);
			}
			tmp++;
		}
		s++;
	}
	return ('\0');
}
