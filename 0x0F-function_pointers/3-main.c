#include "3-calc.h"
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the cal and give me the result
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int (*op_cal)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_cal = get_op_func(argv[2]);
	if (!op_cal)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_cal(a, b));
	return (0);
}
