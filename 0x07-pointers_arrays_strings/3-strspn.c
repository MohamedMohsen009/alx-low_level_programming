#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: a string.
 * @accept: a prefix substring.
 * Return: number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int number;
	char *temp;

	while (*s != '\0')
	{
		temp = accept;
		while (*temp)
		{
			if (*s == *temp)
			{
				number++;
				break;
				
			}
			temp++;
		}
		if (*temp == '\0')
		{
			break;
		}
		s++;
	}
	return (number);
}
