#include<stdio.h>
#include <string.h>
/**
* main - Entry point
* Description:'the program's description'
* Return: Always 0 (Success)
*/
int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(&c, sizeof(c) - 1, 1, stdout);
	return (1);
}
