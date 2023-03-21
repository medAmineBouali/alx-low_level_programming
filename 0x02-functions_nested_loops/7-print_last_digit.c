#include <stdio.h>
#include "main.h"
/**
* print_sign - Entry, point
* Description: Longer description of the function
* @b: The character to print last digit of
* section header: Section description
* Return: Description of the returned value
*/
int print_sign(int b)
{
	int  last_digit = b % 10;

	_putchar(48 + last_digit);
	return (last_digit);
}
