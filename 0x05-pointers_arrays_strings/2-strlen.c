#include "main.h"
#include <string.h>
/**
 * _strlen - The function that checks the len
 * @s: The parameter to be passed
 * Return: nothing
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
