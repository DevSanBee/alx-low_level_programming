#include <stdio.h>
#include <stdlib.h>
/**
 * main - the actuall function
 * @argc: the arguments count
 * @argv: the arguments vector
 * Return: 0 everry success
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = (atoi(argv[-1]) * atoi(argv[-2]));
	printf("%d\n", sum);
	return (0);
}
