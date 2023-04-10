#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * * main - Entry point
 * * Description:'the program's description'
 * *@argc: parametre
 * *@argv: parametre
 * * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int sum = 0, i = 1;

	while (i != argc)
	{
		if (isdigit(*argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
