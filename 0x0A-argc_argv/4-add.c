#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point of the program.
 * @argc: count of the arguments.
 * @argv: an array holding the arguments.
 *
 * Return: always 0 (SUCCEESS).
 */
int main(int argc, char *argv[])
{
	int result;

	result = 0;
	if (argc <= 1)
	{
		printf ("%d\n", 0);
		return (0);
	}
	while (argc--)
	{
		if (argc > 0)
		{
			if (isdigit(*argv[argc]))
			{
				result += atoi(argv[argc]);
			}
			else
			{
				printf("%s\n", "Error");
				return (0);
			}
		}
	}
	printf("%d\n", result);
	return (0);
}
