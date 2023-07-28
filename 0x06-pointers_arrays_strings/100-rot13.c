#include "main.h"

/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * @s: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
    int i;
    char c;

    for (i = 0; s[i] != '\0'; i++)
    {
        c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
                s[i] = c + 13;
            else
                s[i] = c - 13;
        }
    }

    return (s);
}
