#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
