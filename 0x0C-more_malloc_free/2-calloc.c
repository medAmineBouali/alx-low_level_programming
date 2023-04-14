#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc -  allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of elements.
 *
 * Return: pointer to the resulting string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	str = malloc(nmemb * size);

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		str[i] = 0;
	}
	return (str);
}
