#include "main.h"

/**
*_strcpy - function that copies the string pointed to
*@dest: destination pointer
*@src: string to be transfered
*Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0, y = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for (; x < y; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';

	return (dest);
}
