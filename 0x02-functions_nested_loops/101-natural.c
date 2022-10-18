#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include "6-abs.c"
/**
 * main  - Prints the last digit of an integer
 * Description: Prints the last digit of numbers
 * Return: returns the last digit (int)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
