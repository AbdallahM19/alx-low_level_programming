#include"main.h"

/**
 * reverse_array - a function that reverses
 *		content of an array of integers.
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int d, b, c;

	for (d = 0, b = (n - 1); d < b; d++, b--)
	{
		c = a[d];
		a[d] = a[b];
		a[b] = c;
	}
}
