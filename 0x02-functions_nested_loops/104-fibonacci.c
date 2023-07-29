#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
	unsigned long int prev = 1, current = 2, next;
	int i;

	printf("%lu, %lu, ", prev, current);

	for (i = 3; i <= n; i++)
	{
	next = prev + current;
	printf("%lu", next);

	if (i != n)
		printf(", ");

	prev = current;
	current = next;
	}

	printf("\n");
}

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 98;
	print_fibonacci(n);
	return (0);
}
