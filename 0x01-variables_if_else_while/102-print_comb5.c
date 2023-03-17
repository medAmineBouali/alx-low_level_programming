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
	int x, z;

	x = 0;
	while (x <= 98)
	{
		z = x + 1;
		while (z <= 99)
		{
			putchar(x / 10 + 48);
			putchar(x % 10 + 48);
			putchar(' ');
			putchar(z / 10 + 48);
			putchar(z % 10 + 48);
			if (x < 98)
			{
				putchar(',');
				putchar(' ');
			}
			z++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
