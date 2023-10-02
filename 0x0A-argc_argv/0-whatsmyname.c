#include <stdio.h>

/**
 * main - Entry point of the program.
 * @argc: int
 * @argv: str
 * Return: Always 0 (success).
 */

int main(int argc, char *argv[])
{
	(void)argc;
	if (argc > 0)
		printf("%s\n", argv[0]);
}
