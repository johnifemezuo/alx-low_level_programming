#include "main.h"

/**
 * _strstr - returns
 * @haystack: string
 * @needle: substring to find
 * Return: pointer to first
 */
char *_strstr(char *haystack, char *needle)
{
	int k;
	while (*haystack != '\0')
	{
		k = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		haystack++, needle++, k++;
		if (*needle == '\0')
			return (haystack - k);
		haystack -= (k - 1), needle -= k;
	}
	return ('\0');

}
