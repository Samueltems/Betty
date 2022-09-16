#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks uppercase character or not
 * @c: parameter
 * description: drag
 * Return: return 1 if the character is an uppercase
 * Return: 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c < 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
