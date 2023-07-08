#include "main.h"

/**
 * _isdigit - it checks for digits
 * @c: integer
 * Return: if c is a digit 1, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
