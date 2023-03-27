#include "main.h"
/**
* void swap_int- Entry, point
* Description: Longer description of the function
* @a: The adress to swap
* @b: the 2md address to swap
* section header: Section description
* Return: Description of the returned value
*/
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}
