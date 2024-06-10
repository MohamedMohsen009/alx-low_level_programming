#include <stdio.h>
#include <stdlib.h>
/**
 * main - the start of the promgram.
 * @argc: the count of the arguments.
 * @argv: an array holding the arguments.
 *
 * Return: always (0) SUCCESS.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
