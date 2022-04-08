#include "main.h"

/**
*factorial - function that returns the factorial of a given number
*
*@n: the integer to factorise
*Return: 1 for factorial 0, -1 to indicate error for n less that 0
*and the factorized value of n
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
