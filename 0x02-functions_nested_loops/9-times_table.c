#include <stdio.h>
#include "main.h"
/**
* times_table - Entry, point
* Description: Longer description of the function
* section header: Section description
* Return: Description of the returned value
*/
void times_table(void)
{
	int i, j;

	for (i = 0, i < 10, i++)
	{
		for (j = 0, j < 10, j++)
		{
			_putchar(48 + i * j);
			_putchar(',');
			if (j < 9)
				_putchar(' ');

		}
		_putchar('\n');
	}
}
