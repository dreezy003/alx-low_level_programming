#include "main.h"
/**
 * _strpbrk - searches for string
 * @s: string to search
 * @accept: input
 *
 * Return: Always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
	s++;
	}

	return ('\0');
}
