#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int x, y, z;

	for (z = '0'; z <= '9'; z++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (x = '0'; x <= '9'; x++)
			{
				if (!((x == y) || (y == z) || (y > x) || (z > y)))
				{
					putchar(z);
					putchar(y);
					putchar(x);
					if (!(x == '9' && z == '7' && y == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
