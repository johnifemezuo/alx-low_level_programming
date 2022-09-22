#include "main.h"

/**
 * _strncat - concatinate 2 strings.
 * @dest: first string.
 * @n: does something
 * @src: second string.
 * Return: string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, k = 0;

	while (dest[i] != '\0')
		i++;

	while (src[k] != '\0' && n > k)
	{
		dest[i] = src[k];
		i++;
		i++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}

	return (dest);
}
