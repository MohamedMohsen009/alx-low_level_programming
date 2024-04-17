#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /* append null byte at the end */

	return ptr;
}
