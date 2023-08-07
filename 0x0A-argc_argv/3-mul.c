#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: The number of command line arguments
 * @argv: The array containing the command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
	printf("Error: Please provide two numbers to multiply.\n");
	return (1); /* Indicate error */
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("Result: %d * %d = %d\n", num1, num2, result);

	return (0); /* Successful execution */
}
