#include "main.h"
/**
 * print_numbers - Entry point that prints the numbersfrom 0 to 9
 * Retuen: nothing
 */
void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
		_putchar(c);
	_putchar('\n');
}
