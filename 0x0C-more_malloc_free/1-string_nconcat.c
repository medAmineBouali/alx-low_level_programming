#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat- concatenates two strings.
 * @s1: tring 1.
 * @s2: string 2.
 * @n:the nth byte.
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, n1 = 0, n2 = 0;

	while (s2 && s1[n1])
		n1++;
	while (s2 && s2[n2])
		n2++;
	if (n < n2)
		s = malloc(sizeof(char) * (n1 + n + 1));
	else
		s = malloc(sizeof(char) * (n1 + n2 + 1));
	if (!s)
		return (NULL);
	while (i < n1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < n2 && i < (n1 + n))
		s[i++] = s2[j++];
	while (n >= n2 && i < (n1 + n2))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
