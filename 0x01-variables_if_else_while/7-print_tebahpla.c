#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets in reverse way
 * Return: Always 0 (correct)
 */
int main(void)
{
	int i;

	for (i = 'Z' ; i >= 'a' ; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
