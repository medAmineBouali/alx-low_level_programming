#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - Prints a string recursively
* @s: The string to print
*
* Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_puts_recursion(s);
        _putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}