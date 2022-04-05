#include "main.h"
#include <stdio.h>

/**
*_strstr - function that locates a substring
*@haystack: main string
*@needle: substring
*Return: pointer to the beginning of the located substring,
*or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	char *x = needle, *y = haystack;

	while (*y)
	{
		x = needle;
		y = haystack;
		while (*x)
		{
			if (*y == *x)
			{
				y++;
				x++;
			}
			else
				break;
		}
		if (*x == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
