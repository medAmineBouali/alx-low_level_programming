#include "main.h"
/**
* _isupper- Entry, point
* Description: Longer description of the function
* @c: The character to check
* section header: Section description
* Return: Description of the returned value
*/
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
