#include <stdio.h>
#include "main.h"
/**
* print_alphabet - Entry, point
* Description: Longer description of the function
* section header: Section description
* Return: Description of the returned value
*/
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		do {
			_putchar(c);
			c++;
		} while (c != '{');
		i++;
		putchar('\n');
	}
}
