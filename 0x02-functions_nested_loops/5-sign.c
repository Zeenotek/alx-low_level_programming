#include "main.h"
/**
 * print_sign - Entry point
 * @n: the int to check
 * Return: 1 for positive num, -1 for negative or 0 for else
 */
int print_sign(int n)
	{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar(48);
	return (0);
	}
	else if (n < 0)
	{
	_putchar('-');
	}
	return (-1);
}
