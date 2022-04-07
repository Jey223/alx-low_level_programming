#include "main.h"

/**
*_strlen_recursion - function that prints the length of a string
*@s: Pointer string
*Return: Nothing
*/

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
