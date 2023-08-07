#include <stdio.h>

/**
 * main - print its name, followed by a new line
 *
 * @argc: number of command line arguments.
 * @argv: array that contains the comand line arg..
 *
 * Return: (0) when succesfull
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}