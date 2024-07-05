#include "main.h"

/**
 * _strncpy - a function that copies a string
 *@dest: pointer to destination
 *@src: pointer to source
 *@n: bytes of @src
 *
 * Return:destination string
 */

char *_strncpy(char *dest, char *src, int n);

{
	int i;

	i = 0;
	size = 0;
		while (src[i] && i < n)
{
		dest[i] = src[i];
		i++;
}
		while (i < n)
{
		dest[i] = '\0';
		i++;
}
	return (dest);
}
