#include "main.h"

/**
*main - check the code
*
*Return: Always 0.
*/
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

/**
*print_alphabet -Print the alphabet in lowercase, followed by a new line.
*/

void print_alphabet(void)
{
	char alph;

	alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
