#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nl = '\n';
	int ch = 0;

	while (ch < 10)
	{
		putchar(ch);
		ch = 1 + ch;
	}
	putchar(nl);
	return (0);
}
