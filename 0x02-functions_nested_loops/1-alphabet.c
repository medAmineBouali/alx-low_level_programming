#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry, point
 * Description: Longer description of the function
 * section header: Section description
 * Return: Description of the returned value
 */
void print_alphabet(void)
{
	char c = 'a';

	do {
		putchar(c);
		c++;
	}  while (c != '{');
	putchar('\n');
}
