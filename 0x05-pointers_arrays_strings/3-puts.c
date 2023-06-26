#include "main.h"

/**
 * _puts - Prints a string
 * @str: Prints this string
 * *Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
