#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: given value
 * @src: given value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (y = 0; dest[y] != '\0'; y++)
	{}

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[y + x] = src[x];
	}
	dest[y + x] = '\0';

	return (dest);

}
