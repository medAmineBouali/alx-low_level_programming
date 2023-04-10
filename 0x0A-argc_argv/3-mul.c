#include <stdio.h>
#include <stdlib.h>
/**
 * * main - Entry point
 * * Description:'the program's description'
 * *@argc: parametre
 * *@argv: parametre
 * * Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
