#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user. 
 * @s: The operator passed as argu
 * Return: a pointer to the function corresponding
 * to the operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		if (s && s[0] == ops[i].op && !s[1])
		{
			return (ops[i].f);
			i++;
		}
	}
	return (NULL);
}
