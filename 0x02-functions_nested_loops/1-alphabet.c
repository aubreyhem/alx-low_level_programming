#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Return:void
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
