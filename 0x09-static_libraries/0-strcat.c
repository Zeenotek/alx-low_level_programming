#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string where the concatenation will be stored.
 * @src: The source string to be appended.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; src[j] != '\0'; j++, i++)
	dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
