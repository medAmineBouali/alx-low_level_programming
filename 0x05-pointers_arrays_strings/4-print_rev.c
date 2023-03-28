#include "main.h"
/**
* print_rev- Entry, point
* Description: Longer description of the function
* @s: The string to print in reverse
* section header: Section description
* Return: Description of the returned value
*/
void print_rev(char *s)
{
	unsigned int i;

	for(i = strlen(s); i >= 0; i--)
		_putchar(s[i - 1]);
	_putchar('\n');
}
