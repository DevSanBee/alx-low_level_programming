#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int f[98];

	f[0] = 1;
	f[1] = 2;
	printf("%ld, %ld, ", f[0], f[1]);

	for (i = 2; i < f.length; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		if (i == (f.length - 1))
			printf("%ld\n", f[i]);
		else
			printf("%ld, ", f[i]);
	}
	return (0);
}
