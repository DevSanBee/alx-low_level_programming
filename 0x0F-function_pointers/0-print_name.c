#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - the function to be run the program
 * @name: one of the parameters
 * @f: the other parameter
 * Retuen: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
