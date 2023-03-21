#include <stdio.h>
#include "main.h"
/**
* print_last_digit - Entry, point
* Description: Longer description of the function
* @b: The character to print last digit of
* section header: Section description
* Return: Description of the returned value
*/
int print_last_digit(int b)
{
	if (b < 0)
		int l = -b % 10;
	else
	{
		int l = b % 10;
	}
	_putchar(48 + l);
	return (last_digit);
}
