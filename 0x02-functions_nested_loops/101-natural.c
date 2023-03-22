#include <stdio.h>
/**
* main - Entry, point
* Description: Longer description of the function
* section header: Section description
* Return: Description of the returned value
*/
int main(void)
{
	int i=0;
	while (i < 1024)
	{
		if((i % 3) == 0 || (i % 5) == 0)
			printf("%d",i);
		i++;
	}
	printf("\n");
	return (0);
}
