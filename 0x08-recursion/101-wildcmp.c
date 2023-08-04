#include "main.h"

/**
 * wildcmp_helper - Compares two strings, considering wildcards *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if strings can be considered identical, otherwise 0
 */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
	if (*s2 == '\0')
		return (1);
	if (*s2 == '*')
	return (wildcmp_helper(s1, s2 + 1));
	return (0);
	}
	if (*s2 == '*')
	return (wildcmp_helper(s1 + 1, s2) || wildcmp_helper(s1, s2 + 1));
	if (*s1 == *s2)
	return (wildcmp_helper(s1 + 1, s2 + 1));
	return (0);
}

/**
 * wildcmp - Compares two strings, considering wildcards *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
