#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0
 */
int print_alphabet_x10(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i * 10);
		i++;
	}
	_putchar('\n');
	return (0);
}
