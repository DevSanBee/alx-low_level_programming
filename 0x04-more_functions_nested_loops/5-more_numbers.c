#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14 in 10 times
 */
void more_numbers(void)
{
	int i, t;

	t = 0;
	while (t < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		t++;
		_putchar('\n');
	}
}
