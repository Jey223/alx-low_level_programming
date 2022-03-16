#include <stdio.h>
#include <stdlib.h>

/**
 * main - Printing out lower case using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{

		putchar(ch);
	}
	putchar('\n');

	return (0);
}
