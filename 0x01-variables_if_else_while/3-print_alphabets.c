#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char cap = 'A';
	char low = 'a';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}

	while (cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}
	printf("\n");
	return (0);
}
