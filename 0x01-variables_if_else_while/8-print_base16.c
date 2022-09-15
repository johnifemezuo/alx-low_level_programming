#include <stdio.h>

/**
 *
 *
 */

int main(void)
{
	int ch = 'a';
	int num = 0;

	while (ch <= 'f' && num <= 10)
	{
		putchar(num);
		num++;
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
