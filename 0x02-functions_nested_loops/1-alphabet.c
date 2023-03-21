#include <stdio.h>
#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
*On error, -1 is returned, and errno is set appropriately. 
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/*
* print_alphabet - Entry, point
* Description: Longer description of the function
* section header: Section description
* Return: Description of the returned value
*/
void print_alphabet(void)
{
	char c = 'a';

	do {
		_putchar(c);
		c++;
	}  while (c != '{');
	putchar('\n');
}
