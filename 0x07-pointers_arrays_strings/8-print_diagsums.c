#include"main.h"
#include <stdio.h>

/**
 * print_diagsums - Write a function that prints the sum of the two
 *			diagonals of a square matrix of integers.
 * @a: input pointer
 * @size: size of the matrix
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int n, S1 = 0, S2 = 0;

	for (n = 0; n < size; n++)
	{
		S1 += a[n];
		S2 += a[size - n - 1];
		a += size;
	}
	printf("%d, %d\n", S1, S2);
}
