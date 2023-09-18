#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 * Return: 0 Always.
 */

int main(void)
{
	int a = 0;
	char b = 0;

	srand(time(NULL));
	while (a <= 4065)
	{
		b = rand() % 128;
		a += b;
		putchar(b);
	}
	putchar(4192 - a);
	return (0);
}
