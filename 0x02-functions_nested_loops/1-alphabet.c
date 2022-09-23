#include "main.h"

/**
 * print_alphabeth - print alphabeth
 *
 * Return: void
 */


void print_alphabeth(void)

{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
