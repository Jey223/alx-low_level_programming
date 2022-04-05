#include "main.h"
#include <stdio.h>

/**
*print_diagsums - function that prints the sum of the two diagonals
*of a square matrix of integers
*@a: the pointer array of square integers
*@size: size of the array
*Return: Nothing
*/

void print_diagsums(int *a, int size)
{
	int i = 0, max = size * size, sum_left = 0, sum_right = 0;

	for (; i < max; i += size + 1)
		sum_left += a[i];

	for (i = size - 1; i < max - 1; i += size - 1)
		sum_right += a[i];

	printf("%d, %d\n", sum_left, sum_right);
}
