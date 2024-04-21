#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @str: a string.
 * Return: a pointer to a string.
 */
char *cap_string(char *str)
{
	int i;
	int s;

	i = 0;
	s = 0;
	while (str[i] != '\0')
	{
		if (s == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			s = 0;
		}
		else if (str[i] == ',' || str[i] == '\n' || str[i] == '\t'
			 || str[i] == ';' ||
			 str[i] == '.' || str[i] == ' ' || str[i] == '!' ||
			 str[i] == '?' || str[i] == '"' || str[i] == '(' ||
			 str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			s = 1;
		}
		else
		{
			s = 0;
		}
		i++;
	}
	return (str);
}
