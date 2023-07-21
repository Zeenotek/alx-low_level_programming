#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char letter = 'a';

	/* Use a while loop to print each lowercase letter from 'a' to 'z' */
	while (letter <= 'z')
	{
		/* Use _putchar to print the current letter */
		_putchar(letter);
		letter++; /* Move to the next letter */
	}

	/* Use _putchar to print a new line after printing the alphabet */
	_putchar('\n');
}
