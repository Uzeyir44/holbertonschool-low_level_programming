#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @p: pointer to the string
 *
 * Return: pointer to modified string
 */
char *cap_string(char *p)
{
	int i;

	i = 0;

	while (p[i] != '\0')
	{
		if (i == 0 && p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
		else if (
			(p[i - 1] == ' ' || p[i - 1] == '\n' ||
			p[i - 1] == ',' || p[i - 1] == '.' ||
			p[i - 1] == '?' || p[i - 1] == '!' ||
			p[i - 1] == '(' || p[i - 1] == ')' ||
			p[i - 1] == '{' || p[i - 1] == '}' ||
			p[i - 1] == '"' || p[i - 1] == '\t') &&
			(p[i] >= 'a' && p[i] <= 'z')
		)
		{
			p[i] = p[i] - 32;
		}

		i++;
	}

	return (p);
}
