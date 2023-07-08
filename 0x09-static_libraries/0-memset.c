#include "main.h"
/**
 * _memset - sets memory to array
 * @s: address to be filled
 * @b: value to set it as
 * @n: n amount of bytes
 *
 * Return: vale of s char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
