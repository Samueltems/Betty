#include "main.h"

/**
 * largest number - returns largest 3 numbbers
 * @a- first parameter
 * @b - second
 * @c - third
 * Return: largest num
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
