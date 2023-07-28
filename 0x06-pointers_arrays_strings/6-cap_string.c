#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @ch: The character to check.
 *
 * Return: 1 if character is a separator, 0 otherwise.
 */
int is_separator(char ch)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i;

    for (i = 0; separators[i]; i++)
    {
        if (ch == separators[i])
            return 1;
    }

    return 0;
}

/**
 * cap_string - Capitalizes all words in a string.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
    int capitalize_next = 1;
    char *ptr = str;

    while (*ptr != '\0')
    {
        if (capitalize_next && (*ptr >= 'a' && *ptr <= 'z'))
        {
            *ptr = *ptr - ('a' - 'A'); /* Convert to uppercase */
        }

        capitalize_next = 0;

        if (is_separator(*ptr))
        {
            capitalize_next = 1;
        }

        ptr++;
    }

    return (str);
}
