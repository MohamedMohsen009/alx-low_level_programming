#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the program name, followed by a new line
 * @argc: the number of command line arguments
 * @argv: an array of strings containing the command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
