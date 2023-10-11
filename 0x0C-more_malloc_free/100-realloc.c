#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block.
 * @new_size: the new size, in bytes of the new memory block.
 * @old_size: the size, in bytes, of the allocated space for ptr.
 * @ptr: pointer.
 * Return: pointer to the resulting string
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, size;
	char *p0 = ptr;

	size = new_size;
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		size = old_size;
	for (i = 0; i < size; i++)
		p[i] = p0[i];
	free(ptr);
	return (p);
}
