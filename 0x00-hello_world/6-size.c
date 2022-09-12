#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long l;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", sizeof(i));
	printf("Size of a long: %lu bytes(s)\n", sizeof(l));
	printf("Size of a long int: %lu bytes(s)\n" sizeof(li));
	printf("Size of a long long int: %lu bytes(s)\n" sizeof(lli));
	printf("size of a float: %lu bytes(s)\n" sizeof(f));
	return(0);
}
