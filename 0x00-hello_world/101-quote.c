#include <unistd.h>

/**
 * main - Write out standardoutput (stdout)
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	write(1, "and that piece of art is useful\" -Dora korpar, 2015-10-19\n", 59);

	return (1);
}
