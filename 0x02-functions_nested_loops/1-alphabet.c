#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - check the code
 *
 * Return: Always 0
 */
int print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
