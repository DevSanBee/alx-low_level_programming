#include "main.h"
/**
 * _puts_recursion - function to print string recursively
 * @s: the string container
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
		_putchar('\n');
	else if (*(s + i) != '\0')
	{
		_putchar(*s);
		i++;
		_puts_recursion(s + i);
	}
}
