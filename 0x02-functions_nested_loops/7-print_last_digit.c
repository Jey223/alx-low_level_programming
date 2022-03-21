#include "main.h"

/**
*print_last_digit - Checks the last digit of a number
*@c: An integer input
*
*Description: Function thet prints the last digit of a number
*
*Return: last digit of number c.
*/

int print_last_digit(int c)
{
	int n;

	if (c < 0)
	{
		n = -1 * (c % 10);
	}
	else
	{
		n = c % 10;
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
