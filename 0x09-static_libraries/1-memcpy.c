#include "main.h"
/**
 * _memcpy - it copies mem
 * @dest: copy destination
 * @src: copy source
 * @n: number of bytes
 * Return: the string value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
