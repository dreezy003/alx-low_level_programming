#include <stdio.h>
/**
 * main - entry point
 * Return: alway returns 0
 */
int main(void)
{
	int n, m;

	for (n = 48 ; n <= 56; i++)
	{
		for (m = 49; j <= 57; j++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 ||  m != 57)
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
