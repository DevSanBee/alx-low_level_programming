#include "main.h"
/**
 * print_diagonal - function that draws a straight line i
 * the terminal.
 * @n: parameter to be passed
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			break;
		_putchar('\\');
	}
	_putchar('\n');
}
