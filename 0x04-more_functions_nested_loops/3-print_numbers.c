#include "main.h"

/**
*print_numbers - function that prints the digits
*
*Return: nothing
*/

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
