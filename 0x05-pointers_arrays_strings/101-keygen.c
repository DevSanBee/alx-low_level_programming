#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: nothing
 */

int main(void)
{
	int num;

	srand(time(0));

	num = rand();

	printf("%i\n", num);

	return (0);

}
