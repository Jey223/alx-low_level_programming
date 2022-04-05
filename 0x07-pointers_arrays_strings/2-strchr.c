#include "main.h"
#include <stdio.h>

/**
*_strchr - function that locates a character in a string
*@s: char array string
*@c: char to look for
*Return: NULL if char is not found, or pointer to first occurrence of char `c`
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
