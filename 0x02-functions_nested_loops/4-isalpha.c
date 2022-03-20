#include "main.h"

/**
*_isalpha - Checks for alphabets
*@c: is a variable representing ascii values for alphabet
*
*Return: Success 1 or zero if otherwise
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
