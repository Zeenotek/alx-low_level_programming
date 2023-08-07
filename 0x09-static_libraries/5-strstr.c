#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (!*needle)
	return (haystack);

	for (i = 0; haystack[i]; i++)
	{
	for (j = 0; needle[j]; j++)
	{
	if (haystack[i + j] != needle[j])
	break;
	}

	if (!needle[j])
	return (haystack + i);
	}

	return (NULL);
}
