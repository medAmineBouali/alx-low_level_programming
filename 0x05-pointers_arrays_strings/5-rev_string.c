#include "main.h"
#include <string.h>
/**
* rev_string- Entry, point
* Description: Longer description of the function
* @s: The string to reverse
* section header: Section description
* Return: Description of the returned value
*/
void rev_string(char *s)
{
	unsigned int i, j = strlen(s);
	char tmp;

	while (j != 0)
	{
		tmp = s[0];
		for(i = 1; i < strlen(s) ; i++)
		{
			s[i] = tmp;
			tmp = s[i];
			s[0] = tmp;
		}
		j--;
	}
	_putchar('\n');
}
