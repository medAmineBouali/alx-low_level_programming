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
	char t[3] = {' ', ' ', ' '};

	for (i=0; i < 10; i++)
	{
		for (j=0; j < 10; j++)
		{
			if (j * i < 10)
			{
				t[2] = 48 + j * i;
				_putchar(' ');
				_putchar(' ');
				_putchar(t[2]);
			}
			else
			{
				t[2] = 48 + (j * i) % 10;
				t[1] = 48 +((j * i) - (j * i) % 10)/10;
				_putchar(t[0]);
				_putchar(t[1]);
				_putchar(t[2]);
			}
			_putchar(',');
		}
		_putchar('\n');
	}
}
