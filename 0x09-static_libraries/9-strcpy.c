#include "main.h"
#include <string.h>
/**
* _strcpy- Entry, point
* Description: Longer description of the function
* @dest: The string to copy to
* @src: the string to copy from
* section header: Section description
* Return: Description of the returned value
*/
char *_strcpy(char *dest, char *src)
{
	unsigned int i;

	for (i = 0; i <= strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
