#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string where the concatenation will be stored.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes to be used from @src.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; src[j] != '\0' && j < n; j++, i++)
	dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
