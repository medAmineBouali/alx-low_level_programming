#include "main.h"
/**
* print_numbers- Entry, point
* Description: Longer description of the function
* @a: The character to check
* @b: The character
* section header: Section description
* Return: Description of the returned value
*/
void print_numbers(void)
{
	char c = '0';
	int i = 0;
	
	do {
		_putchar(c);
		i++;
		c++;
	} while (i < 10);
	_putchar('\n');
}
