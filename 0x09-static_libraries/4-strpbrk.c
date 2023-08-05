#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The characters to search for.
 *
 * Return: A pointer to the first occurrence in @s of any of the
 *         characters in @accept, or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	if (_strchr(accept, *s) != NULL)
	return (s);
	s++;
	}
	return (NULL);
}
