#include <stdio.h>
/**
 * main - the ovarall function
 * @argc: arguments count
 * @argv: arguments vectors
 * Return: 0 for every success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = (argc - 1);

	printf("%d\n", i);
	return (0);
}
