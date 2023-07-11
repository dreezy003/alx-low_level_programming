#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: array of double pointer
 * Return: pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int size;
	char *s;
	int i;
	int j;
	int k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}

	size += (ac + 1);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}

	s[k] = '\0';

	return (s);
}