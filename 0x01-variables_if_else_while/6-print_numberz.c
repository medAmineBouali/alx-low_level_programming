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
	char c = '0';
	int i = 0;

	while (i < 10)
	{
		putchar(c);
		i++;
		c++;
	}
	putchar('\n');
	return (0);
}
