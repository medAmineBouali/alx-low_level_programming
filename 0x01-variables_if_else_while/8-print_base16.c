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
	char c = '1', C = 'a';

	do {
		putchar(c);
		c++;
	}  while (c != ':');
	do {
		putchar(C);
		C++;
	}  while (C != 'e');
	putchar('\n');
	return (0);
}
