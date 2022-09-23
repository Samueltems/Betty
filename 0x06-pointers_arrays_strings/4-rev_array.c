#include "main.h"
/**
 * reverse_array - it reverses an array
 * @a: pointer to the array
 * @n: number of elements belonging to an arraay
 * Return: void.
 */

void reverse_array(int *a, int n)

{
	int temp, counter;
	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
