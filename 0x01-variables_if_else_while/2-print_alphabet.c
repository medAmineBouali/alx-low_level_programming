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
	char c = 'a';

	do {
		printf("%c", c);
		c++;
	}  while (c != '{');
	printf(" ");
	return (0);
}
