#include "main.h"
/**
 * flip_bits - returns the number of bits to flip n to m.
 * @n: number in decimal.
 * @m: second number.
 *
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m; j = 0;

	while (i > 0)
	{
		j += (i & 1);
		i >>= 1;
	}
	return (j);
}
