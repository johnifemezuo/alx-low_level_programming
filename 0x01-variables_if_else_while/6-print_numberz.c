#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	int nl = '\n';

	while (num < 10)
	{
		putchar(num);
		num = num + 1;
	}
	putchar(nl);
	return (0);
}
