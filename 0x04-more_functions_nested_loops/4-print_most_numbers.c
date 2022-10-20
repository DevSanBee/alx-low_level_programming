#include "main.h"
/**
 * print_most_numbers = Entry point
 * Return: nothing
 */
void print_most_numbers(void)
{
	char d;

	for (d = 48; d <= 57; d++)
	{
		if (d == 2 || d == 4)
			continue;
		_putchar(d);
	}
	_putchar('\n');
}
