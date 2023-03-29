#include "main.h"
#include <string.h>

/**
 * *_strncpy-  copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * @n: number of chars to copy
 * Return: dest
 * process :  we take two input strings: the source string `src`
 * and the destination string `dest`
 * we use a loop to copy each character of `src` to `dest`
 * we also copies the null character `\0` to the end of `dest`
 *to mark the end of the string.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}