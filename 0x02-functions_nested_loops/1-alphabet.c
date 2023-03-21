#include <stdio.h>
#include "main.h"
/**
 * main - Entry, point
 * Description: Longer description of the function
 * section header: Section description
 * Return: Description of the returned value
 */
int main(void)
{
	char c = 'a';

	do {
		putchar(c);
		c++;
	}  while (c != '{');
	putchar('\n');
	return (0);
}
