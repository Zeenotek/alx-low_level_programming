#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
		int x;
		int y;

		for (y = '0'; y <= '9'; y++)
		{
			for (x = '0'; x <= '9'; x++)
			{
				if (!((x == y) || (y > x)))
				{
					putchar(y);
					putchar(x);
					if (!(x == '9' && y == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');
		return (0);
	}
