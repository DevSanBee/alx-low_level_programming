#include "main.h"
/**
* _pow_recursion - Prints the string in reverse order
* @x: string to be reversed
* @y: power
* Return: the length of the string
* description: does the shit
*/
int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y)
		n = x;
	if (y - 1)
		n *= _pow_recursion(x, y - 1);

	return (n);
}
