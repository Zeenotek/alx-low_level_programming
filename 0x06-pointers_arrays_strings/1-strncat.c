#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be used from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Move the pointer to the end of dest */
	while (*ptr)
		ptr++;

	/* Append the content of src are to dest, using at most n bytes */
	while (*src && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/* Add the terminating null byte */
	*ptr = '0';

	return (dest);
}
