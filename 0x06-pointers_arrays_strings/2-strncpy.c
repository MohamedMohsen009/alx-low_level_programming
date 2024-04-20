#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: string to be copied to.
 * @src: string to be copied.
 * @n: number of bytes to be copied.
 * Return: a pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; l < n && src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}
	return (dest);
}
