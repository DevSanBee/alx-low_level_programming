#include "main.h"

/**
 * _isalpha - Entry function
 * @c: the parameter to be passed
 * Return: nothing
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}
