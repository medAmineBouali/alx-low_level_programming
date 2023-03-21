#include <stdio.h>
#include "main.h"
/**
* print_sign - Entry, point
* Description: Longer description of the function
* @c: The character to check
* section header: Section description
* Return: Description of the returned value
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
