#include "main.h"
/**
 * _strlen - gives the string char
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	return (longa);
}
