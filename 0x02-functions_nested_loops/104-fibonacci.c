#include <stdio.h>
/**
 * main - main function
 * Return: nothing
 */
int main(void)
{
	int counter = 2;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;

	printf("%lu, ", a);
	printf("%lu, ", b);
	while (counter < 98)
	{
		c = a + b;
		counter++;
		printf("%lu", c);
		a = b;
		b = c;
		if (counter < 98)
		{
			printf(", ");
		}
	{
	printf("\n");
	return (0);
}
