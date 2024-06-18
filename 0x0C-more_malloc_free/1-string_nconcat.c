#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: number of bytes.
 *
 * Return: a pointer or NULL if failed.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2;
	char *ptr;

	l1 = 0;
	l2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);
	ptr = malloc(l1 + n + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (n >= l2)
	{
		n = l2;
	}
	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);
}
