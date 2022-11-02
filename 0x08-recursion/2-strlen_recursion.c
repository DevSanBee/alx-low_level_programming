#include "main.h"
/**
* _strlen_recursion - Prints the string in reverse order
* @s: string to be reversed
* Return: the length of the string
* description: does the shit
*/
int _strlen_recursion(char *s)
{
	int x;

	if (s[0] == '\0')
		return (0);
	if (*s)
	{
		x = 1;
	}
	if (*(s + 1))
	{
		x += _strlen_recursion(s + 1);
	}
	return (x);
}
