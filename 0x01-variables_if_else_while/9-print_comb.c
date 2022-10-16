#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 56; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	num = 57;
	putchar(num);
	return (0);
}
