#include "main.h"
/**
 * get_bit - returns the bit at the index.
 * @n: number in decimal.
 * @index: index.
 *
 * Return: bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return((n >> index) & 1);
}
