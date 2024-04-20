#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: string number one.
 * @src: string number two.
 * @n: number of bytes.
 * Return: a pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (k = 0; src[k] != '\0'; k++)
	{
	}
	for (j = 0; j < k && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	if (n >= k)
	{
		dest[i + j] = '\0';
	}
	return (dest);
}
