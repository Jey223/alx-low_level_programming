#include "main.h"

/**
*jack_bauer- prints every minutes of the day
*
*Description: Function that prints every minutes of the day
*Return: void
*/

void jack_bauer(void)
{
	int Hr;
	int Mn;

	Hr = 0;

	while (Hr < 24)
	{
		Mn = 0;
		while (Mn < 24)
		{
			_putchar((Hr / 10) + '0');
			_putchar((Hr % 10) + '0');
			_putchar(':');
			_putchar((Mn / 10) + '0');
			_putchar((Mn % 10) + '0');
			_putchar('\n');

			Mn++;
		}

		Hr++;
	}
}
