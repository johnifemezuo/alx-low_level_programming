#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; ++al)
	{
		if (al == 'q' && al == 'e')
		{
			putchar(al);
			++al;
		}

		putchar(al);
		++al;
	}
		printf("\n");
		return (0);
}
