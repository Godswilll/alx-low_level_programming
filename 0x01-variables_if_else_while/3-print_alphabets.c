#include <stdio.h>

/**
 * main - prints the alphabethin lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (succcess)
 */
int main(void)
{
	int ch;

	for (ch =  'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
