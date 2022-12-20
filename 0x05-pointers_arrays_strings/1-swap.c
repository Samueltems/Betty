#include "main.h"
/**
 * swap_int - swaps value
 * @a: parameter
 * @b: parameter
 * Return: zero
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
