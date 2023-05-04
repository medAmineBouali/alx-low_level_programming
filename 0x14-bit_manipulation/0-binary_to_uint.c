#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int.
 * @b: number in binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, decimal = 0, p = 1;

	for (n = 0; n <  strlen(b); n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
	}
	n = strlen(b);
	while (n > 0)
	{
		n--;
		decimal = decimal + (b[n] - 48) * p;
		p = p * 2;
	}
	return (decimal);
}
