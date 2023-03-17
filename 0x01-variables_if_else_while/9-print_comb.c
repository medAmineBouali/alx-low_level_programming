#include <stdio.h>
/**
* main - Entry point
* Description:'the program's descrin'
* Return: Always 0 (Success)
*/
int main(void)
{
	char arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(arr[i]);
		if (i == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
