#include <stdio.h>
#include "main.h"

/**
 * swap_int - check the code
 * @a: inter to point to
 * @b: integer to point
 * Return: Always 0.
 *
 */
void swap_int(int *a, int *b)
{
	int n = *b;
	*b = *a;
	*a = n;
}
