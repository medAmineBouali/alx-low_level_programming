#include "main.h"
#include <string.h>
/**
* _atoi- Entry, point
* Description: Longer description of the function
* @s: the string to copy from
* section header: Section description
* Return: Description of the returned value
*/
int _atoi(char *s)
{
	int sign = 1;
		unsigned int num = 0;
		do {
			if (*s == '-')
				sign *= -1;
			else if (*s >= '0' && *s <= '9')
				num = (num * 10) + (*s - '0');
			else if (num > 0)
				break;
		} while (*s++);		
		return (num * sign);
}
