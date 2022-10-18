#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int len = 0;
	char alpha;

	while (len < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
		len++;
	}
}
