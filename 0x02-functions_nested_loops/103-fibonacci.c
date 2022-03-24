#include <stdio.h>

/**
*main - function that prints sum of even terms of fibonacci sequence
*
*Return: Always 0 (Success).
*/

int main(void)
{
	int i, fibonacci[50], sum = 0;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

		if ((fibonacci[i] % 2) == 0 && fibonacci[i] < 4000000)
			sum += fibonacci[i];
	}
	printf("%d\n", sum);

	return (0);
}
