#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at index.
 * @n: number in decimal.
 * @index: index.
 *
 * Return: manipulated number.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
