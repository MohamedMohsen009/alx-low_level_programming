#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: string 1.
 * @src: string 2.
 * @n: number of bytes.
 * Return: a pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++);

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i+j] = src[j];
	}
	if (j == n - 1)
	{
		dest[i+j] = '\0';
	}
	return (dest);
}
