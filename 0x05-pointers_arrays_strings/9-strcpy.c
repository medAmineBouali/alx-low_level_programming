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
int i = -1;

	do {
				i++;
						dest[i] = src[i];
							} while (src[i] != '\0');

		return (dest);
}
