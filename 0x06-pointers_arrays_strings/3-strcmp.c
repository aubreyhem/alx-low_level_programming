#include "main.h"

/**
 * _strcmp - write a function that compares two strings
 *
 * @s1: input string
 * @s2: input string
 *
 * Return: 0 if s1 and s2 are equal, if not return other number
 */

int _strcmp(char *s1, char *s2);
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
