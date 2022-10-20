#include <stdio.h>
#include "main.h"

/**
 * _isupper - Entry point
 * @c: integer to be passed
 * Return: is upper or lower
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96)
		return (0);
}
