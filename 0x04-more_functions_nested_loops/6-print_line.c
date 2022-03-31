#include "main.h"

/**
*print_line - function that draws a straight line in the terminal
*@n: the number of times
*Return: nothing
*/

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}
