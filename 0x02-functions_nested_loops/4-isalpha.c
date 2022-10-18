#include "main.h"

/**
 * _isalpha - Entry function
 * @c: the parameter to be passed
 * Return: nothing
 */
int _isalpha(int c)
{
	if (c < 48 || c == 59 || c > 57)
		return (1);
	else
		return (0);
}
