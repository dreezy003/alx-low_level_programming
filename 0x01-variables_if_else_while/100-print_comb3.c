#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 10; i <= 19; i++)
	{
		for (j = 20; j <= 35; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 34 ||  j != 36)
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
