#include "main.h"
#include <string.h>
/**
* print_array- Entry, point
* Description: Longer description of the function
* @a: The array to print
* @n: number of elements to print
* section header: Section description
* Return: Description of the returned value
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == (n - 1))
			printf(", ");
	}
	_putchar('\n');
}
