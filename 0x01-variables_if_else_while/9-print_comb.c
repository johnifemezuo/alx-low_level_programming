#include <stdio.h>

/**
 * main - Entry point
 *
 * 
 */

int main(void)
{
	int num = 0;

	do{
		putchar(num);
		num = num + 1;
	}
	while (num < 10);

	putchar('\n');
	return (0);
}
