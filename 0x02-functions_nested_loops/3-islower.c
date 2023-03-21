#include <stdio.h>
#include "main.h"
/**
* _islower - Entry, point
* Description: Longer description of the function
* @c: The character to check
* section header: Section description
* Return: Description of the returned value
*/
int _islower(char c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
