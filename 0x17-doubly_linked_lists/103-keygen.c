#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), i = 0, tmp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	password[0] = codex[tmp];
	tmp = 0;
	while (i < len)
	{
		tmp += argv[1][i];
		i++;
	}
	password[1] = codex[(tmp ^ 79) & 63];
	tmp = 1;
	i = 0;
	while (i < len)
	{
		tmp *= argv[1][i];
		i++;
	}
	password[2] = codex[(tmp ^ 85) & 63];
	tmp = 0;
	i = 0;
	while (i < len)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
		i++;
	}
	srand(tmp ^ 14);
	password[3] = codex[rand() & 63];
	tmp = 0;
	i = 0;
	while (i < len)
	{
		tmp += (argv[1][i] * argv[1][i]);
		i++;
	}
	password[4] = codex[(tmp ^ 239) & 63];
	i = 0;
	while (i < argv[1][0])
	{
		tmp = rand();
		i++;
	}
	password[5] = codex[(tmp ^ 229) & 63];
	password[6] = '\0';
	printf("%s", password);
	return (0);
}
