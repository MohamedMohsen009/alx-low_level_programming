#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: a string.
 * Return: a pointer to the string.
 */
char *string_toupper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (str);
}
