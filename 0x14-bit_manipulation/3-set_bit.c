#include "main.h"
/**
 * set_bit - sets the bit at index to 1.
 * @n: number in decimal.
 * @index: index.
 *
 * Return: manipulated number.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return (*n | (1 << index));
}
