#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program.
 * @argc: count of the arguments.
 * @argv: an array holding all the arguments.
 *
 * Return: always (0) SUCCESS.
 */
int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
