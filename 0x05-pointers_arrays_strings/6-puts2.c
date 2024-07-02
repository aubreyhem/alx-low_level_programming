#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first character
 *
 * @str: input
 *
 * Return: print
 */
void puts2(char *str)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(s[a]);
		}
	}
	_putchar('\n');
}
