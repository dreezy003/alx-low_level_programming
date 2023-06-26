#include "main.h"

/**
 * _stropy - Copy a string
 * @dest: Destination value
 * @src: source value
 * Return: The pointer to dest
 */

char *_stropy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
