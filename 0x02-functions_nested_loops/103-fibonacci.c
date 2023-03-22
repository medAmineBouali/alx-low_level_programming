#include <stdio.h>
/**
* main - Entry, point
* Description: Longer description of the function
* section header: Section description
* Return: Description of the returned value
*/
int main(void)
{
	unsigned long a = 0, b = 1, n, i = 0;

	while (1)
	{
		n = a + b;
		a = b;
		b = n;
		if (n >  4000000)
			break;
		else if ((n % 2) == 0)
			i = i + n;
	}
	printf("%lu\n", i);
	return (0);
}
