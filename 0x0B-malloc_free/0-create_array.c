#include "main.h"
#include <stdlib.h>

/**
 * create_array - it creates array
 * @size: size of array to be created
 * @c: char to assign
 * Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
