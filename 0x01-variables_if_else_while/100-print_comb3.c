#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * * main - Entry point
 * * Description :program that prints
 * * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar (j);
			if ((i == 56) && (j == 57))
			{
				break;
			}
			putchar(',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
