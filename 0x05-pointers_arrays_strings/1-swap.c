#include "main.h"
/**
 * swap_int - it swaps values
 * @a: parameter given
 * @b: parameter
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
