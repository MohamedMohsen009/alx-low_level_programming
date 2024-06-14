#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1  = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	result = malloc((i + j) * sizeof(char) + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		result[j + i] = s2[j];
	}
	result[j + i + 1] = '\0';
	return (result);
}
