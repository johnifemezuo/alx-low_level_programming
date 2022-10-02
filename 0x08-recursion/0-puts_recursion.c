#include "main.h"

/**
 * _puts_recursion - prints a string with new line
 * @n: string
 * Return: Always 0.
 * On error, -1 return, and erno is sset approprately.
 */

void _puts_recursion(char *n)
{
	if (*n == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*n);
	_puts_recursion(1 + n);
}
