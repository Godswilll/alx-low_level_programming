#include <stdio.h>

/**
 * main - prints the alphabeth in lowercase.
 * followed by a new line, except a ans e
 * Return: ALways 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n')
		return (0);
}
