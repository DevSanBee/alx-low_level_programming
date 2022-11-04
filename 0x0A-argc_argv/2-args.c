#include <stdio.h>
/**
 * main - the actual main function
 * @argc: argument count
 * @argv: the argument vector
 * Return: 0 every success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
