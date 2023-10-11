#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 * @b: number of bites
 * Return: pointer to allocated memory.
 */
int mian(int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
