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
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
