#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	int a;

		while (count < 10)
		{
			for (a = 'a'; a <= 'z'; a++)
			{
				_putchar(a);
			}

			count++;
			_putchar('\n');
		}
}
