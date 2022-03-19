#include "main.h"

/**
*_islower - checks for lowercase character
*@c: Is a variable that represents ascii values for lower
*
*Return: Success 1 or 0
*/

int _islower(int c)
{
	if (c < 97 || c > 123)
		return (0);
	else
		return (1);
}
