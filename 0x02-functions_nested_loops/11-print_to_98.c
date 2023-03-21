#include <stdio.h>
#include "main.h"
/**
* print_to_98 - Entry, point
* Description: Longer description of the function
* @n: start
* section header: Section description
* Return: Description of the returned value
*/
void print_to_98(int n)
{
		while (n != 98 )
		{
			printf("%d, ", n);
			if (n > 98)
				n--;
			else
				n++;
		}
		printf("98\n");
}
