#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Conunts the number
 * @argv: pointer of array of pointers containing strings entering main
 * Return: Always 0 (Succes)
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
