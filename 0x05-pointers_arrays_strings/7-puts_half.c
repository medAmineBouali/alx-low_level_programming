#include "main.h"
#include <string.h>
/**
* puts_half- Entry, point
* Description: Longer description of the function
* @str: The string to reverse
* section header: Section description
* Return: Description of the returned value
*/
void puts_half(char *str)
{
	unsigned int i;

	for (i = (strlen(str) + (strlem(str) % 2)) / 2; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
