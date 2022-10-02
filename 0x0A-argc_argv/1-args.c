#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: counts the number of parameters that go into main
 * @argv: pointer of array of pointers contaiing strings entering main
 * Return: always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
