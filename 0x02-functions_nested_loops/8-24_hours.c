#include <stdio.h>
#include "main.h"
/**
* jack_bauer - Entry, point
* Description: Longer description of the function
* section header: Section description
* Return: Description of the returned value
*/
void jack_bauer(void)
{
	int t[4] ={0, 0, 0, 0}, h = 0, min = 0;

	while (h < 24)
	{
		while (min < 60)
		{
			_putchar(48 + t[0]);
			_putchar(48 + t[1]);
			_putchar(':');
			_putchar(48 + t[2]);
			_putchar(48 + t[3]);
			_putchar('\n');
			if(t[3] < 9)
				t[3]++;
			else
			{
				t[2]++;
				t[3]=0;
			}
			min = t[2]*10 + t[3];
		}
		if(t[1] < 9)
			t[1]++;
		else
		{
			t[0]++;
			t[1]=0;
		}
		h = t[0]*10 + t[1];
		min = 0;
		t[2] = 0;
		t[3] = 0;
	}
}
