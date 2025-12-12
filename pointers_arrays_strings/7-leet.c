#include "main.h"

/**
 * leet - encodes a string into 1337
 * @p: pointer to string
 *
 * Return: pointer to modified string
 */
char *leet(char *p)
{
	int i;
	int j;
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (p[i] == a[j])
			{
				p[i] = b[j];
				break;
			}
		}
	}

	return (p);
}
