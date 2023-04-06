#include "main.h"
/**
 * _strlen_recursion - counts the length of a string
 * @s: the input string
 * Return: the lenght of s
 */
int _strlen_recursion(char *s)
{
	int result;

	result = 0;
	if (*s > '\0')
	{
		result = result + _strlen_recursion(s + 1) + 1;
	}
	return (result);
}
