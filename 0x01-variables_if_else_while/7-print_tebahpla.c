#include <stdio.h>

/**
 * main - prints the lowercase alphabeths in a reversed form,
 * followed by a new line.
 * Return: Always 0 (success)
 */
in main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}