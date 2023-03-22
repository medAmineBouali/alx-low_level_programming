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
		{
			printf("\n");
			break;
		}
		else
		{
			printf(", ");
		i++;
		printf("%lu", n);
		}
	}
	return (0);
}
