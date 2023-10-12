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

int main(int argc, char *argv[])
{
	int *op_cal, n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op_cal = argv[2];
	if (get_op_func(op_cal) == NULL || op_cal != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (!n2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op_cal)(n1, n2));
	return (0);
}
