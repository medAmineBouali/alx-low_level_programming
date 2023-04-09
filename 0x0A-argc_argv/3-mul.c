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
	char c = 'a', C = 'A';

	do {
		putchar(c);
		c++;
	}  while (c != '{');
	do {
		putchar(C);
		C++;
	}  while (C != '[');
	putchar('\n');
	return (0);
}
