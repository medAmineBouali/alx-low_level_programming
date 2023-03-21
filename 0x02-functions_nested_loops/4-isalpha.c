#include <stdio.h>
#include "main.h"
/**
* _isalpha - Entry, point
* Description: Longer description of the function
* @c: The character to check
* section header: Section description
* Return: Description of the returned value
*/
int _isalpha(char c)
{
	if (c > 96 && c < 123 || c > 64 && c < 91)
		return (1);
	else
		return (0);
}
