#include <stdio.h>

/**
*main- Function prints first 50 fibonacci numbers
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	long int fi, f1 = 1, f2 = 2;

	printf("%ld, %ld", f1, f2);

	for (i = 2; i < 50; i++)
	{
		fi = (i - f1) + (i - f2);
		if (i == 49)
			printf("%ld\n", fi);
		else
			printf("%ld, ", fi);
	}
	return (0);
}
