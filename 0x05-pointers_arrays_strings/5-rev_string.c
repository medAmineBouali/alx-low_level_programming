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
	unsigned int i, j = strlen(s) - 1;
	char tmp1, tmp2;

	while (j != 0)
	{
		tmp1 = s[0];
		for(i = 1; i < strlen(s) ; i++)
		{
			tmp2 = s[i];
			s[i] = tmp1;
			tmp1 = tmp2;
			s[0] = tmp2;
		}
		j--;
	}
}
