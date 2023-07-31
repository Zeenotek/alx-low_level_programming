#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search the prefix in.
 * @accept: The set of bytes to be accepted as prefix.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}

		if (s[i] != accept[j])
			break;
	}

	return (count);
}
