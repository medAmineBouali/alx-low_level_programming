#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 *  * * last_digit - Entry point
 *   * * Description:'the fun's description
 *    * * @b: describe the parameter
 *     * * Return: (Success)
 *     */
int last_digit(int b)
{
	        int  last_digit = b % 10;

		        return (last_digit);
}
/**
 * * main - Entry point
 * * Description:'the program's description'
 * * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);
	if (last_digit(n) == 0)
	{
		printf("%d 0 and is 0\n", last_digit(n));
	}
	else if (n > 5)
	{
		printf("%d and is greater than 5\n", last_digit(n));
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", last_digit(n));
	}
	return (0);
}
