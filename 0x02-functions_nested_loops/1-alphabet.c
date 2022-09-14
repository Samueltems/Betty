#include "main.h"

/**
 * main - Entry point
 * Desc: print_alphabet
 * Return: void
 */
void print_alphabet(void)

{
	char c = 'a';
	while (c <= 'z');
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

