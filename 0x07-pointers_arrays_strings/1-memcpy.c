#include "main.h"

/**
*_memcpy - function that copies memory area
*@dest: char array to copy into
*@src: char array to copy from
*@n: number of bytes to copy
*Return: To dest pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *y;

	y = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (y);
}
