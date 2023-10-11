#include <stdio.h>

/**
 * * main - Entry point
 * * Description:'the program's description'
 * *@argc: parametre
 * *@argv: parametre
 * * Return: Always 0 (Success)
*/
int main(int argc, char* argv[])
{
	int i = argc;
	if (i > 0)
	printf("%s\n", *argv);
	return (0);
}
