#include <string.h>
#include "main.h"
/**
*_puts- Entry, point
* Description: Longer description of the function
* @str: string to print
* section header: Section description
* Return: Description of the returned value
*/
void _puts(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	_putchar(str[i]);
	_putchar('\n');
}
