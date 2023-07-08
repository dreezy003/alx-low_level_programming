#include "main.h"
/**
 * _strncat - it concatenates two strings
 * @dest: given value
 * @src: concatenated string source
 * @n: number of values
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int x;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
	dest[p] = src[x];
	p++;
	x++;
	}
	dest[p] = '\0';
	return (dest);
}
