#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: PRINTS NUMBERS
 * Return: Always 0 (Correct)
 */
int main(void)
{
	int a;
	for (a = '0' ; a <= '9' ; a++)
	{
		putchar (a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
