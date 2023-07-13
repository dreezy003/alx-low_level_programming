#include "main.h"
#include <stdlib.h>

/**
 * array_range - range of arrays
 * @min: minimum array
 * @max: maximum array
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p, a = 0;

	if (min > max)
		return (NULL);
	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[a] = min;
		a++;
		min++;
	}

	return (p);
}
