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
	char *tmp;

	result = 0;
	if (argc <= 1)
	{
		printf ("%d\n", 0);
		return (1);
	}
	while (argc--)
	{
		if (argc > 0)
		{
			for (tmp = argv[argc]; *tmp != '\0'; tmp++)
			{

				if (!isdigit(*tmp))
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
			result += atoi(argv[argc]);
		}
	}
	printf("%d\n", result);
	return (0);
}
