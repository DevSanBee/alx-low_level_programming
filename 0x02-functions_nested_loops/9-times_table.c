#include "main.h"
/**
 * times_table  - Prints the last digit of an integer
 * Description: Prints the last digit of numbers
 * Return: returns the last digit (int)
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int m;

			m = i * j;
			if (m >= 10)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else if (j == 0)
			{
				_putchar(m + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(m + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
