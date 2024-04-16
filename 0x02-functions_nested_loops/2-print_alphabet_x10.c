#include "main.h"
/**
 * print_alphabet_x10 : prints alphabet 10 times.
 *
 * Return: always void.
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
