#include <stdio.h>
/**
 * main - entry point
 * Return: alway returns 0
 */
int main(void)
{
	int i, j;

	for (i = 19; i < 34; i++)
	{
		for (j = 20; j <= 35; j++)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 34 ||  j != 35)
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
