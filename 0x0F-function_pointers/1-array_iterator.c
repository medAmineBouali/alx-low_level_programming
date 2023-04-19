#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - Entry point
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL || size == 0)
		return;
	int i;

	for (i = 0; i != size; i ++)
		action(array + i);
	return;
}
