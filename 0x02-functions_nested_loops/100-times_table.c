#include <stdio.h>
#include "main.h"
/**
* print_times_table - Entry, point
* Description: Longer description of the function
* @n: The character to check
* section header: Section description
* Return: Description of the returned value
*/
void print_times_table(int n)
{
	int i, j;
	char t[4];

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				t[4] = {' ', ' ', ' ', ' '}
				if (j * i < 10)
				{
					t[3] = 48 + j * i;
				}
				else if (j * i < 100)
				{
					t[3] = 48 + (j * i) % 10;
					t[2] = 48 + ((j * i) - (j * i) % 10) / 10;
				}
				else
				{
					t[3] = 48 + (j * i) % 10;
					t[2] = 48 + ((j * i) - (j * i) % 10 - ((j * i) - (j * i) % 100)) / 10;
					t[1] = 48 + ((j * i) - (j * i) % 100) / 100;
				}
				_putchar(t[0]);
				_putchar(t[1]);
				_putchar(t[2]);
				_putchar(t[3]);
				if (j < n)
				_putchar(',');
			}
			_putchar('\n');
		}
	}
}
