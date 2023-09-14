#include<stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
 *
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest
 *			prime factor of number (num)
 *
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
	int prnum, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (prnum = 3; prnum <= _sqrt(num); prnum += 2)
	{
		while (num % prnum == 0)
		{
			num = num / prnum;
			largest = prnum;
		}
	}


	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{

	largest_prime_factor(612852475143);

	return (0);
}
