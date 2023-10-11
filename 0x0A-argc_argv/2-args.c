#include <stdio.h>
/**
 * * main - Entry point
 * * Description:'the program's description'
 * *@argc: parametre
 * *@argv: parametre
 * * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
