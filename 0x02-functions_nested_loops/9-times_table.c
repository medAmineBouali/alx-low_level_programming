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
	int i, j, t[2];

	for (i=0; i < 10; i++)
	{
		for (j=0; j < 10; j++)
		{
			if (j * i < 10)
				_putchar(48 + j * i);
			else
			{
				t[1] = (j * i) % 10;
				t[0] = ((j * i) - t[1])/10;
				_putchar(48 + t[0]);
				_putchar(48 + t[1]);
			}
			_putchar(',');
			if (j < 9)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
