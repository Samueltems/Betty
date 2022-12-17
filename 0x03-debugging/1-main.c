#include <stdio.h>

/**
 * main - causes an infinity loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite Loop Incoming :(\n");

	i = 0;

	/*while (i < 10)*/
	/*{*/
	/*putchar(i);*/
	/*}*/

	printf("Infinite Loop Avoided! :)\n");

	return (0);
}
