#include "main.h"
/**
 * print_times_table  - Prints the last digit of an integer
 * @n: ndf
 * Description: Prints the last digit of numbers
 * Return: returns the last digit (int)
 */
void print_times_table(int n)
{

	if (!(n < 1) && !(n > 15))
	{
		int i, j;

		for (i = 0; i < (n + 1); i++)
		{
			for (j = 0; j < (n + 1); j++)
			{
				int m;

				m = i * j;
				if (j == 0)
				{
					_putchar(m + '0');
					_putchar(',');
					_putchar(' ');
				}
				else if (j != n)
				{
					print_nump(m, 1);
				}
				else
				{
					print_nump(m, 0);
				}
			}
			_putchar('\n');
		}
	}
	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
}
/**
 * print_nump  - Prints the last digit of an integer
 * @n: first number
 * @c: bool
 * Description: Prints the last digit of numbers
 * Return: nothing
 */
void print_nump(int n, int c)
{

	if (n < 0)
	{
		_putchar('-');
		n = _abs(n);
	}

	if (n > 99)
	{
		_putchar((n / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n > 9)
	{
		_putchar(' ');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	if (c == 1)
	{
		_putchar(',');
		_putchar(' ');
	}
}

/**
 * _abs  - checks if a character is an alphabet
 * @n: takes a character
 * Description: Checks whether the character(c) is an alphabet
 * Return: if c is an alphabet an returns 0 otherwise
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (n * -1);
}
