#include "3-calc.h"

/**
 * main - check the cal and give me the result
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char **argv)
{
	int n1, n2;
	int (*op_cal)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	op_cal = get_op_func(argv[2]);
	if (!op_cal)
	{
		printf("Error\n");
		exit(99);
	}

	if (!n2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_cal(n1, n2));
	return (0);
}
