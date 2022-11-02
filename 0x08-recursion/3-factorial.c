#include "main.h"
/**
* factorial - Prints the string in reverse order
* @n: string to be reversed
* Return: the length of the string
* description: does the shit
*/
int factorial(int n)
{
	int x;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n)
	{
		x = n;
	}
	if (n - 1)
	{
		x *= factorial(n - 1);
	}
	return (x);
}
