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
	unsigned int i;
	char tmp;

	for(i = 0; i <= (strlen(s) / 2); i++)
	{
		tmp = s[i];
		s[i] = s[strlen(s) -i];
		s[strlen(s) -i ] = tmp;
	}
}
