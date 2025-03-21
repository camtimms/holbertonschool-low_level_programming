#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Finds the right operator function
 *
 * @s: String from terminal
 *
 * Description
 *
 * Return: Calc result (int) or if no match (NULL)
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

	while (ops[i].op != NULL && s[1] == '\0')
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
