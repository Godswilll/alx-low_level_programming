#include "main.h"

/**
 * print_alphabeth_x10 alphabeth 10 times
 *
 * Return: void
 */

void print alphabeth x10(void)
{
	int round = 0;
	char letter = 'a';

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar('\n');
			letter++;
		}
		_putchar('\n');

		round++;
	}
	return (0);
}
