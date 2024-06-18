#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	unsigned int i, j;
	char *ptr;

	l1 = 0;
	l2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		l2++;
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		l1++;
	}
	ptr = malloc(l1 + n + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		ptr[i] = s1[i];
	}
	if (n >= l2)
	{
		n = l2;
	}
	for (j = 0; j < n; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
