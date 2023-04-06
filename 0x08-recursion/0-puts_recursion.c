#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _puts_recursion- Entry, point
* Description: Longer description of the function
* @s: The string to print
* section header: Section description
* Return: Description of the returned value
*/
void _puts_recursion(char *s)
{
    if (strlen(*s) = 0)
        return;
    _putchar(*s);
    s ++;
    if (*s != '\0')
    {
        _puts_recursion(s);
    }
    else
    _putchar('\n');
}