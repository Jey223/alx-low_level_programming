#include "main.h"

/**
*_memset - function thatfills memory with constant byte
*@s: buffer array
*@b: constant byte
*@n: the number of bytes of the memeory area to fill
*Description: Fills the first `n` bytes of the memory area
*pointed to by `s` with the constant byte `b`
*Return: Pointer to the memory area `s`
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
