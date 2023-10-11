#include <stdio.h>
/**
 * * main - Entry point
 * * Description:'the program's description'
 * *@argc: parametre
 * *@argv: parametre
 * * Return: Always 0 (Success)
*/
<<<<<<< HEAD
int main(int argc, char* argv[])
=======
int main(int argc __attribute__((unused)), char *argv[])
>>>>>>> 17aa0819f20208fa9642c3b1aeeede3e2c74b1eb
{
	int i = argc;
	if (i > 0)
	printf("%s\n", *argv);
	return (0);
}
