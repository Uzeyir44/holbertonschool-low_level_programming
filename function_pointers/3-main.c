#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs simple operations from command line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, exits with 98, 99, or 100 on error
 */
int main(int argc, char **argv)
{
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
