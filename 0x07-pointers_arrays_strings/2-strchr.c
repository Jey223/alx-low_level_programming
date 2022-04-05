#include "main.h"

/**
*_strchr - function that locates a character in a string
*@s: char array string
*@c: char to look for
*Return: NULL if char is not found, or pointer to first occurrence of char `c`
*/

char *_strchr(char *s, char c)
{
	while (c != '\n')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (s + 1);
}
