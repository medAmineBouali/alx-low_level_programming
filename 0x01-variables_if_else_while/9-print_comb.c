#include <stdio.h>
/**
* main - Entry point
* Description:'the program's descrin'
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
