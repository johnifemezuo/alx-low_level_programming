#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		num = num + 1;
		putchar(num);
	}
	putchar('\n');
	return (0);
}
