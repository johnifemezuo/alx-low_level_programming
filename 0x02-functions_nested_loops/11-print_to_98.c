#include "main.h"
#include <stdio.h>

/**
 * Print_to_98 - print all natural numbers fro n to 98.
 * @n: the numer to start counting from n to 98
 * Return: Always 1.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
			printf("%d\n", 98);
	}
	else
	{
	for (n = n; n > 98; n--)
		printf("%d, ", n);
		printf("%d\n", 98);
	}
}
