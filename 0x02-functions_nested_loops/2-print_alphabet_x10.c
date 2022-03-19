#include "main.h"

/**
*print_alphabet_x10 - Prints 10 times the alphabet in lowercase
*/

void print_alphabet_x10(void)
{
	int count;
	char alph;

	count = 1;

	while (count <= 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		count++;
	}
}
