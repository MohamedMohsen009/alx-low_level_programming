#include "main.h"
/**
 * _islower - checks if a char is lowercase.
 * @c : character to be checked.
 * Return: 1 if lower and 0 if not.
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
