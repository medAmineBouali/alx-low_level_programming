#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - prints each array elem on a newl
 * @array: array
 * @size: how many elem in array
 * @cmp: pointer to compare function
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	while (i <= size)
	{
		if(cmp(array[i]))
			break;
		i++;
	}
	if (i == size)
		return (-1);
	else
		return (i);
}
