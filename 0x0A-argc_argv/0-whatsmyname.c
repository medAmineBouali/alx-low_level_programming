#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * * main - Entry point
 * * Description:'the program's description'
 * * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	switch (n)
	{
		case 0:
		{
			printf("%d is zero\n", n);
			break;
		}
		default:
		{
			if (n > 0)
				printf("%d is positive\n", n);
			else
				printf("%d is negative\n", n);
		}
	}
	return (0);
}
