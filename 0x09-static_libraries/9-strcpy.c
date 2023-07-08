#include "main.h"
/**
 * char *_strcpy - main function to copy
 *
 * @dest: copy destination
 * @src: copy source
 *
 * Return: a string value
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for ( ; y < x ; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
