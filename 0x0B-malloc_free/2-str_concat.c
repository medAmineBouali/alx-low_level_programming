#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenates two strings
* * @s1: first string
* @s2: second string
* * Return: a pointer to the array, or NULL if it fails
**/
char *str_concat(char *s1, char *s2)
{
	int i, j, lent, len2, len;
	char *result;

	lent = len2 = 0;
	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}
	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < lent; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		result[i] = s2[j];
	result[len] = '\0';
	return (result);
}

