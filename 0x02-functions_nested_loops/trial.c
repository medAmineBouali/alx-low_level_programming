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
	unsigned long a[2] = {0, 0}, b[2] = {1, 0}, n[2];

	for (i = 0; i < 98; i++)
	{
		n[0] = (((a[0] + a[1] + b[0] + b[1]) - ((a[0] + a[1] + b[0] + b[1]) % 2)) / 2);
		n[1] = (((a[0] + a[1] + b[0] + b[1]) + ((a[0] + a[1] + b[0] + b[1]) % 2)) / 2);
		printf("%lu", (n[1] + n[0]));
		a[0] = b[0];
		a[1] = b[1];
		b[0] = n[0];
		b[1] = n[1];
		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
