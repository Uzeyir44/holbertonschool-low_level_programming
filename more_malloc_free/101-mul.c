#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_digit_string(char *s)
{
	int i;
	for (i = 0; s[i]; i++)
		if (!isdigit(s[i]))
			return 0;
	return 1;
}

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, i, j;
	int *result;
	int carry, n1, n2, sum, pos;
	int start_print = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return 98;
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_digit_string(num1) || !is_digit_string(num2))
	{
		printf("Error\n");
		return 98;
	}

	len1 = strlen(num1);
	len2 = strlen(num2);
	result = calloc(len1 + len2, sizeof(int));
	if (!result)
		return 98;

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			pos = i + j + 1;
			sum = n1 * n2 + result[pos] + carry;
			result[pos] = sum % 10;
			carry = sum / 10;
		}
		result[i + j + 1] += carry;
	}

	for (i = 0; i < len1 + len2; i++)
	{
		if (!start_print && result[i] == 0)
			continue;
		start_print = 1;
		printf("%d", result[i]);
	}
	if (!start_print)
		printf("0");
	printf("\n");

	free(result);
	return 0;
}
