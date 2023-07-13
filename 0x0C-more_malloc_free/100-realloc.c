#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - resize memory allocated
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (a = 0; a < old_size && a < new_size; a++)
	{
		nptr[a] = ((char *) ptr)[a];
	}

	free(ptr);
	return (nptr);
}
