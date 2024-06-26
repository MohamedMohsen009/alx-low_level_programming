#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: a string.
 * @s2: a string.
 * Return: 0 if matched.
 */
int _strcmp(char *s1, char *s2)
{
	int l;

	for (l = 0; s1[l] != '\0' && s2[l] != '\0'; l++)
	{
		if (s1[l] > s2[l])
		{
			break;
		}
		else if (s1[l] < s2[l])
		{
			break;
		}
	}
	return (s1[l] - s2[l]);
}
