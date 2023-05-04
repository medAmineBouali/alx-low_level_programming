#include "main.h"
/**
 * print_binary - converts binary to unsigned int.
 * @n: number in decimal.
 *
 * Return: unsigned int.
 */
void print_binary(unsigned long int n)
{
	char byte;
	int i, j, b = 0;

	for (i = sizeof(unsigned long int) - 1; i >= 0; i--)
	{
		byte = *(((char *)&n) + i);
		for (j = 8; j >= 0; j--)
		{
			b = b + ((byte >> j) & 1);
			if (b > 0)
				_putchar(((byte >> j) & 1) ? '1' : '0');
		}
	}
	if (b == 0)
		_putchar('0');
}
