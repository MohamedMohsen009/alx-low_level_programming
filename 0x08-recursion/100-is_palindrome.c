#include "main.h"
#include <string.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: a string to check.
 *
 * Return: 1 if palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (is_palindrome_helper(s, strlen(s) - 1, strlen(s) - 1));
}
/**
 * is_palindrome_helper - check if a string is palindrome.
 * @s: a string to check.
 * @i: an index.
 *
 * Return: 1 if palindrome and 0 if not.
 */
int is_palindrome_helper(char *s, int i, int length)
{
	if (i == length / 2)
	{
		return (1);
	}
	if (s[length - i] != s[i])
	{
		return (0);
	}
	return (is_palindrome_helper(s, i - 1, length));
}
