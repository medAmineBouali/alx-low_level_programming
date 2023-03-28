#include <string.h>
#include "main.h"
/**
* puts2- Entry, point
* Description: Longer description of the function
* @str: string to print
* section header: Section description
* Return: Description of the returned value
*/
void puts2(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i+=2)
	_putchar(str[i]);
	_putchar('\n');
}
