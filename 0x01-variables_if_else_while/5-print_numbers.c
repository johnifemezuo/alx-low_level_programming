#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int text;
	int num = 0;

	while (num < 10)
	{
		text += num;
		num++;
		printf("%d", text);
		printf("\n");
	}
	return (0);
}
