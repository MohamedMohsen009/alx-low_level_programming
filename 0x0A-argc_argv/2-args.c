#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of the program.
 * @argc: count of the arguments.
 * @argv: an array holding the arguments.
 *
 * Return: always (0) SUCCESS.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
