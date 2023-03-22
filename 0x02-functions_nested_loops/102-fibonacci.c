#include <stdio.h>
/**
* main - Entry, point
* Description: Longer description of the function
* section header: Section description
* Return: Description of the returned value
*/
int main(void)
{
	int i;
	unsigned long a = 0, b = 1, n;

	for (i = 0; i < 50; i++)
	{
		n = a + b;
		printf("%d", n);
		a = b;
		b = n;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
