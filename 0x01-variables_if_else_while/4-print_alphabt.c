#include <stdio.h>
#include <stdlib.h>

/**
 * main - Alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
