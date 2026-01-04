#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func - selects the correct function for an operator
 * @s: operator passed as a string
 *
 * Return: pointer to the function corresponding to the operator,
 * or NULL if no match is found
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
